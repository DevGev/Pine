#pragma once

#include <pine/headers.h>
#include <pine/url.h>
#include <string>
#include <vector>

namespace pine {
class request {
public:
    request();
    ~request();

    bool match_url(const char* route_url);
    std::string arg(uint32_t i);
    std::string header(const std::string& key);
    void set_header(const std::string& key, const std::string& value);
    void set_headers(const char* raw);

    const char* method() { return headers.method; }
    const char* url() { return headers.url; }

private:
    url_t req_url;
    http_header_t headers;
};
}
