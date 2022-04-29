#pragma once

namespace pine {
typedef struct url {
    char args[100][512];
    char url[512];
} url_t;

bool match_url(url_t& url, const char* route_url, const char* req_url);
}
