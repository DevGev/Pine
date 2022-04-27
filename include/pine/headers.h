#pragma once

#include <string>

namespace pine {
typedef struct http_header_entry {
    char key[100];
    char value[100];
} http_header_entry_t;

typedef struct http_header {
    char url[100];
    char method[10];
    http_header_entry_t entries[100];
    int num_entries { 0 };
} http_header_t;

void set_header_value(http_header_t& header, const char* key, const char* value);
std::string header_value(const http_header_t& header, const char* key);
int parse_until(const char* raw_header, char* data, const char* delim, size_t size, size_t position, bool lower = false);
void parse_header(http_header_t& header, const char* raw_header);
}
