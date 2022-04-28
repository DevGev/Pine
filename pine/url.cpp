#include <pine/url.h>
#include <string.h>

bool pine::match_url(url_t& url, const char* route_url, const char* req_url)
{
    size_t route_url_size = strlen(route_url);
    size_t req_url_size = strlen(req_url);
    size_t argument = 0;
    size_t position = 0;

    for (size_t i = 0; i < 100; i++)
        memset(url.args[i], 0, 512);
    memset(url.url, 0, 100);

    if (req_url_size > 100)
        return false;

    if (route_url_size > req_url_size)
        return false;

    strncpy(url.url, req_url, req_url_size);
    for (size_t i = 0; i < route_url_size; i++) {
        if (position >= req_url_size)
            break;

        if (route_url[i] == '@') {
            size_t pos = 0;
            while (req_url[position] != '/') {
                if (position >= req_url_size)
                    break;
                if (pos >= 512)
                    return false;

                url.args[argument][pos] = req_url[position];
                position++;
                pos++;
            }
            argument++;
            continue;
        }

        if (route_url[i] != req_url[position])
            return false;
        position++;
    }

    return true;
}
