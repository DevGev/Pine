#pragma once

#include <pine/headers.h>
#include <string>
#include <vector>

#define HTTP_HEADER_MAX_SIZE 65535

namespace pine {
class response {
public:
    response();
    ~response();

    bool set_content_file(const std::string& file_name);
    /* set text wrapper for the string class */
    void set_text(const std::string& new_content);
    /* set text only works for ASCII strings */
    void set_text(const char* new_content);
    /* works for all content types*/
    void set_content(const std::string& new_content);

    void set_header(const std::string& key, const std::string& value);
    bool set_response_code(int code);
    void write_header(int fd);

    const char* text() { return content; }
    int size() { return content_size; }

private:
    char* content {};
    int content_size {};
    int response_code { 200 };

    std::string response_line;
    http_header_t headers;
};
}
