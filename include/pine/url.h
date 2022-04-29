#pragma once

namespace pine {
typedef struct url {
    char args[100][1024];
    char url[1024];
} url_t;

bool match_url(url_t& url, const char* route_url, const char* req_url);
}
