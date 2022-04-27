#include <pine/server.h>
#include <pine/sockets.h>
#include <sys/wait.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <poll.h>
#include <string>
#include <sstream>
#include <algorithm>

pine::server::server(int port)
{
    this->port = std::to_string(port);
}

pine::server::~server()
{
    routes.clear();
}

void pine::server::route(route_t r)
{
    routes.push_back(r);
}

void pine::server::set_static_path(const std::string& path_name)
{
    static_path = path_name;
    if (path_name.back() == '/')
        static_path.pop_back();
}

void pine::server::accept_connections()
{
    struct sockaddr_in client;
    while (is_running) {
        socklen_t addr_size = sizeof(client);
        int clientfd = accept(insock, (struct sockaddr*)&client, &addr_size);
        if (clientfd < 0)
            perror("accept()");
        slave_send_response(clientfd);
        usleep(100);
    }
}

void pine::server::close_client_connection(int clientfd)
{
    shutdown(clientfd, SHUT_RDWR);
    close(clientfd);
}

bool match_url(const pine::route_t* route, const std::string& url, pine::request* req)
{
    if (url == "/" && route->url != "/")
        return false;

    size_t n1 = std::count(url.begin(), url.end(), '/');
    size_t n2 = std::count(route->url.begin(), route->url.end(), '/');
    if (n1 != n2)
        return false;

    std::stringstream s1(url);
    std::stringstream s2(route->url);
    std::string f1 {};
    std::string f2 {};

    while (true) {
        bool c1 = static_cast<bool>(getline(s2, f2, '/'));
        bool c2 = static_cast<bool>(getline(s1, f1, '/'));

        if (!c1 && !c2)
            break;

        if (c1 != c2)
            return false;

        if (f2 == "@") {
            req->args().push_back(f1);
            continue;
        }

        if (f2 != f1)
            return false;
    }

    return true;
}

std::string pine::server::route_url_static(std::string url)
{
    if (!static_path.size())
        return {};

    /* basic security measure */
    std::string path_name = static_path;
    for (size_t i = 0; i < url.size(); i++) {
        if (url[i] == '.' && url[i + 1] == '.')
            continue;
        path_name += url[i];
    }

    if (access(path_name.c_str(), F_OK) == 0)
        return path_name;
    return {};
}

pine::route_t* pine::server::route_url(pine::request* req)
{
    for (auto& route : routes) {
        if (match_url(&route, req->url(), req))
            return &route;
    }
    return {};
}

bool pine::server::keep_alive_connection(int clientfd)
{
    int timeout = 60000;
    struct pollfd fds[1];
    fds[0].fd = clientfd;
    fds[0].events = POLLIN;

    if (poll(fds, 1, timeout) == 0)
        return false;
    return true;
}

void pine::server::send_response(int clientfd)
{
    char* data = new char[HTTP_HEADER_MAX_SIZE];
    int receive_size = recv(clientfd, data, HTTP_HEADER_MAX_SIZE, 0);
    data[HTTP_HEADER_MAX_SIZE] = 0;

    /* unexpected socket close or failed recv() */
    if (receive_size <= 0) {
        delete[] data;
        close(insock);
        return close_client_connection(clientfd);
    }

    /* parse http header and match url */
    request* req = new request(data);
    response* res = new response();

    /* don't close connection if not requested */
    bool keep_alive = (req->header("Connection") == "keep-alive");
    if (keep_alive)
        res->set_header("Connection", "keep-alive");

    auto handler = route_url(req);
    auto write_response = [&]() {
        res->write_header(clientfd);
        write(clientfd, res->text(), res->size());
    };

    if (handler) {
        handler->callback(req, res);
        write_response();
    }
    else {
        std::string static_path = route_url_static(req->url());
        if (static_path.back() == '/')
            static_path += "index.html";

        if (static_path.size()) {
            res->set_content_file(static_path.c_str());
        } else {
            res->set_text("404");
            res->set_response_code(404);
        }

        write_response();
    }

    delete[] data;
    delete req;
    delete res;

    if (keep_alive) {
        if (keep_alive_connection(clientfd))
            send_response(clientfd);
    }

    close_client_connection(clientfd);
}

void pine::server::slave_send_response(int clientfd)
{
    if (fork() == 0) {
        close(insock);
        send_response(clientfd);
        exit(0);
    }

    close(clientfd);
    /* prevent zombie children */
    signal(SIGCHLD, SIG_IGN);
}

bool pine::server::run()
{
    insock = socket_connect(port.c_str());
    is_running = true;
    accept_connections();
    return true;
}
