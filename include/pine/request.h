#pragma once

#include <pine/headers.h>
#include <pine/url.h>
#include <string>
#include <vector>

namespace pine {
class request {
public:
    request(const std::string& raw_header);
    ~request();

    void parse_header();
    bool match_url(const char* route_url);
    std::string arg(uint32_t i);

    std::string header(std::string key);
    void set_header(const std::string& key, const std::string& value);

    const char* method() { return headers.method; }
    const char* url() { return headers.url; }

private:
    std::string req_raw_header;

    url_t req_url;
    http_header_t headers;
};
}
