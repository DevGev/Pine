#include <pine/server.h>
#include <pine/sockets.h>
#include <sys/wait.h>
#include <arpa/inet.h>
#include <string.h>
#include <unistd.h>
#include <poll.h>
#include <string>

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

bool pine::server::ssl(const char* cert_file, const char* key_file)
{
#ifdef OPENSSL
    ssl_context = openssl_init_ctx();
    if (openssl_load_certificates(ssl_context, cert_file, key_file))
        is_ssl = true;
    return true;
#endif
    is_ssl = false;
    return is_ssl;
}

void pine::server::set_static_path(const std::string& path_name)
{
    static_path = path_name;
    if (path_name.back() == '/')
        static_path.pop_back();
}

void pine::server::accept_connections()
{
    client_t client;
    socklen_t addr_size = sizeof(client);
    client.fd = accept(insock, (struct sockaddr*)&client, &addr_size);
    client.is_ssl = false;

    if (client.fd < 0)
        perror("accept()");

    if (is_ssl) {
#ifdef OPENSSL
        openssl_ssl_connection_t conn { 0, ssl_context };
        int fd = openssl_accept(conn, client.fd);
        client.ssl = conn.ssl;

        /* fallback to http if tls fails */
        if (fd == -1) {
            SSL_free(client.ssl);
        } else {
            client.is_ssl = true;
            client.fd = fd;
        }
#endif
    }

    enable_keepalive(client.fd);
    slave_send_response(client);
}

void pine::server::close_client_connection(const client_t& client)
{
#ifdef OPENSSL
    if (client.is_ssl)
        SSL_free(client.ssl);
#endif

    shutdown(client.fd, SHUT_RDWR);
    close(client.fd);
}

std::string pine::server::route_url_static(const std::string& url)
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
    for (auto& route : routes)
        if (req->match_url(route.url.c_str()))
            return &route;
    return {};
}

bool pine::server::keep_alive_connection(const client_t& client)
{
    int timeout = 60000;
    struct pollfd fds[1];
    fds[0].fd = client.fd;
    fds[0].events = POLLIN;

    if (poll(fds, 1, timeout) == 0)
        return false;
    return true;
}

void pine::server::write_response(const client_t& client, response* res)
{
    char header[HTTP_HEADER_MAX_SIZE];
    header[0] = 0;
    res->header(header, HTTP_HEADER_MAX_SIZE);
    client_write(client, header, strlen(header), MSG_MORE);
    client_write(client, res->text(), res->size(), 0);
}

void pine::server::send_response(const client_t& client)
{
    char data[HTTP_HEADER_MAX_SIZE];
    int receive_size = client_read(client, data, HTTP_HEADER_MAX_SIZE, 0);
    data[HTTP_HEADER_MAX_SIZE - 1] = 0;

    /* unexpected socket close or failed recv() */
    if (receive_size <= 0)
        return close_client_connection(client);

    request req;
    response res;

    req.set_headers(data);
    auto handler = route_url(&req);

    /* don't close connection if not requested */
    bool keep_alive = (req.header("Connection") == "Keep-Alive");
    if (keep_alive)
        res.set_header("Connection", "keep-alive");

    if (handler) {
        handler->callback(&req, &res);
        write_response(client, &res);
    }
    else {
        std::string static_path = route_url_static(req.url());
        if (static_path.back() == '/')
            static_path += "index.html";

        if (static_path.size()) {
            res.set_content_file(static_path.c_str());
        } else {
            res.set_text("404");
            res.set_response_code(404);
        }

        write_response(client, &res);
    }

    if (keep_alive) {
        if (keep_alive_connection(client))
            send_response(client);
        return;
    }

    close_client_connection(client);
}

void pine::server::slave_send_response(client_t& client)
{
    if (fork() == 0) {
        close(insock);
        send_response(client);
        exit(0);
    }

    close(client.fd);
    /* prevent zombie children */
    signal(SIGCHLD, SIG_IGN);
}

size_t pine::server::client_write(const client_t& client, const char* data, size_t size, int flags)
{
#ifdef OPENSSL
    if (client.is_ssl)
        return openssl_write(client.ssl, data, size);
#endif
    return send(client.fd, data, size, flags);
}

size_t pine::server::client_read(const client_t& client, void* data, size_t size, int flags)
{
#ifdef OPENSSL
    if (client.is_ssl)
        return openssl_read(client.ssl, data, size);
#endif
    return recv(client.fd, data, size, flags);
}

bool pine::server::run()
{
    insock = socket_connect(port.c_str());
    is_running = true;
    while (is_running)
        accept_connections();
    return true;
}
