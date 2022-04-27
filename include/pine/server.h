#pragma once

#include <pine/request.h>
#include <pine/response.h>
#include <string>
#include <functional>
#include <vector>
#include <memory>

#define HTTP_HEADER_MAX_SIZE 65535

namespace pine {
typedef struct route {
    std::string url;
    std::function<void(request*, response*)> callback;
} route_t;

class server {
public:
    server(int port);
    ~server();

    /* define route url, ex: /directory/file.png
     * url arguments denoted by '@' sign */
    void route(route_t r);
    void set_static_path(const std::string& path_name);
    bool run();

private:
    void accept_connections();
    void send_response(int clientfd);
    void slave_send_response(int clientfd);
    void close_client_connection(int clientfd);
    bool keep_alive_connection(int clientfd);

    void strip_url(std::string& url);
    std::string route_url_static(std::string url);
    route_t* route_url(pine::request* args);

    std::vector<route_t> routes;
    std::string static_path;
    std::string port;

    bool is_running { false };
    int insock {};
};
}
