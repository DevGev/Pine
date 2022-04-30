#include <pine/sockets.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/tcp.h>
#include <netdb.h>
#include <memory.h>

#ifdef OPENSSL
SSL_CTX* pine::openssl_init_ctx()
{
    SSL_library_init();
    const SSL_METHOD* method;

    OpenSSL_add_all_algorithms();
    SSL_load_error_strings();
    method = TLS_server_method();
    return SSL_CTX_new(method);
}

int pine::openssl_accept(openssl_ssl_connection_t& conn, int fd)
{
    openssl_init_ssl(conn);
    SSL_set_fd(conn.ssl, fd);
    if (SSL_accept(conn.ssl) == -1)
        return -1;
    return SSL_get_fd(conn.ssl);
}

void pine::openssl_init_ssl(openssl_ssl_connection_t& conn)
{
    conn.ssl = SSL_new(conn.ctx);
}

bool pine::openssl_load_certificates(SSL_CTX* ctx, const char* cert, const char* key)
{
    if (SSL_CTX_use_certificate_file(ctx, cert, SSL_FILETYPE_PEM) <= 0)
        return false;
    if (SSL_CTX_use_PrivateKey_file(ctx, key, SSL_FILETYPE_PEM) <= 0)
        return false;
    if (!SSL_CTX_check_private_key(ctx))
        return false;
    return true;
}

size_t pine::openssl_read(SSL* ssl, void* data, size_t size)
{
    return SSL_read(ssl, data, size);
}

size_t pine::openssl_write(SSL* ssl, const char* data, size_t size)
{
    return SSL_write(ssl, data, size);
}
#endif

addrinfo* socket_address_info(const char* port)
{
    struct addrinfo hints;
    struct addrinfo* ai;

    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;

    if (getaddrinfo(NULL, port, &hints, &ai) != 0)
        return NULL;

    return ai;
}

int socket_bind(addrinfo* ai)
{
    int insock;
    for (; ai != NULL; ai = ai->ai_next) {
        int option = 1;
        insock = socket(ai->ai_family, ai->ai_socktype, 0);
        setsockopt(insock, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &option, sizeof(option));

        if (insock == -1)
            continue;

        if (bind(insock, ai->ai_addr, ai->ai_addrlen) == 0)
            break;
    }

    return insock;
}

void socket_listen(int insock)
{
    listen(insock, SOMAXCONN);
}

void pine::enable_keep_alive(int sock)
{
    int yes = 1;
    setsockopt(sock, SOL_SOCKET, SO_KEEPALIVE, &yes, sizeof(int));
    int idle = 1;
    setsockopt(sock, IPPROTO_TCP, TCP_KEEPIDLE, &idle, sizeof(int));
    int interval = 1;
    setsockopt(sock, IPPROTO_TCP, TCP_KEEPINTVL, &interval, sizeof(int));
    int maxpkt = 10;
    setsockopt(sock, IPPROTO_TCP, TCP_KEEPCNT, &maxpkt, sizeof(int));
}

int pine::socket_connect(const char* port)
{
    addrinfo* ai = socket_address_info(port);
    int insock = socket_bind(ai);
    freeaddrinfo(ai);
    socket_listen(insock);
    return insock;
}
