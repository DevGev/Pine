#pragma once

/* compile with openssl support */
#define OPENSSL

#ifdef OPENSSL
#include "openssl/ssl.h"
#include "openssl/err.h"

typedef struct openssl_ssl_connection {
    SSL* ssl { 0 };
    SSL_CTX* ctx { 0 };
} openssl_ssl_connection_t;
#endif

namespace pine {
/* start listening for connections on {port} */
int socket_connect(const char* port);
/* setopt for keep-alive connections */
void enable_keepalive(int sock);

#ifdef OPENSSL
SSL_CTX* openssl_init_ctx();
void openssl_init_ssl(openssl_ssl_connection_t& conn);
bool openssl_load_certificates(SSL_CTX* ctx, const char* cert, const char* key);
size_t openssl_read(SSL* ssl, void* data, size_t size);
size_t openssl_write(SSL* ssl, const char* data, size_t size);
int openssl_accept(openssl_ssl_connection_t& conn, int fd);
#endif
}
