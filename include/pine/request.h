#pragma once

#include <pine/headers.h>
#include <string>
#include <vector>
#include <map>

namespace pine {
class request {
public:
    request(const std::string& raw_header);
    ~request();

    void parse_header();

    std::string header(std::string key);
    void set_header(const std::string& key, const std::string& value);

    std::vector<std::string>& args() { return arguments; }
    const char* method() { return headers.method; }
    const char* url() { return headers.url; }

private:
    std::string req_raw_header;
    std::vector<std::string> arguments;
    http_header_t headers;
};
}
