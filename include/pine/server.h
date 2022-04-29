#pragma once

#include <pine/request.h>
#include <pine/response.h>
#include <pine/sockets.h>
#include <string>
#include <functional>
#include <vector>
#include <memory>

#define HTTP_HEADER_MAX_SIZE 4096

namespace pine {
typedef struct route {
    std::string url;
    std::function<void(request*, response*)> callback;
} route_t;

typedef struct client {
    int fd { 0 };
    bool is_ssl { false };
#ifdef OPENSSL
    SSL* ssl { 0 };
#endif
} client_t;

class server {
public:
    server(int port);
    ~server();

    /* define route url, ex: /directory/file.png
     * url arguments denoted by '@' sign */
    void route(route_t r);
    void set_static_path(const std::string& path_name);
    bool ssl(const char* cert_file, const char* key_file);
    bool run();

private:
    void accept_connections();
    void send_response(const client_t& client);
    void slave_send_response(client_t& client);
    void close_client_connection(const client_t& client);
    bool keep_alive_connection(const client_t& client);

    size_t client_read(const client_t& client, void* data, size_t size, int flags);
    size_t client_write(const client_t& client, const char* data, size_t size);

    void strip_url(std::string& url);
    std::string route_url_static(std::string url);
    route_t* route_url(pine::request* args);

    std::vector<route_t> routes;
    std::string static_path;
    std::string port;

    bool is_running { false };
    bool is_ssl { false };
    int insock { 0 };

#ifdef OPENSSL
    SSL_CTX* ssl_context { 0 };
#endif
};
}
