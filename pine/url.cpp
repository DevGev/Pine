#include <pine/url.h>
#include <string.h>

bool pine::match_url(url_t& url, const char* route_url, const char* req_url)
{
    size_t route_url_size = strlen(route_url);
    size_t req_url_size = strlen(req_url);
    size_t argument = 0;
    size_t req_url_pos = 0;
    size_t route_url_pos = 0;

    if (req_url_size > 1024 || route_url_size > req_url_size)
        return false;

    memcpy(url.url, req_url, req_url_size);
    url.url[req_url_size] = 0;

    while (true) {
        if (route_url[route_url_pos] == '@') {
            if (req_url_pos >= req_url_size || req_url[req_url_pos] == '/')
                return false;

            size_t pos = 0;
            while (req_url[req_url_pos] != '/') {
                if (req_url_pos >= req_url_size)
                    break;
                if (pos >= 1024)
                    return false;
                url.args[argument][pos] = req_url[req_url_pos];
                req_url_pos++;
                pos++;
            }

            url.args[argument][pos] = 0;
            argument++;
            route_url_pos++;
        }

        if (req_url_pos < req_url_size && route_url_pos >= route_url_size)
            return false;
        if (req_url_pos >= req_url_size && route_url_pos >= route_url_size)
            return true;
        if (route_url[route_url_pos] != req_url[req_url_pos])
            return false;

        req_url_pos++;
        route_url_pos++;
    }

    return true;
}
