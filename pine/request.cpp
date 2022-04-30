#include <pine/request.h>
#include <unistd.h>
#include <memory.h>

pine::request::request()
{
}

pine::request::~request()
{
}

void pine::request::set_headers(const char* raw)
{
    parse_header(headers, raw);
}

bool pine::request::match_url(const char* route_url)
{
    return pine::match_url(req_url, route_url, url());
}

std::string pine::request::header(const std::string& key)
{
    char key_lower[100];
    size_t size = key.size();
    if (size > 100)
        return {};
    for (size_t i = 0; i < size; i++)
        key_lower[i] = tolower(key[i]);
    key_lower[size] = 0;
    return header_value(headers, key_lower);
}

void pine::request::set_header(const std::string& key, const std::string& value)
{
    set_header_value(headers, key.c_str(), value.c_str());
}

std::string pine::request::arg(uint32_t i)
{
    if (i >= 100)
        return {};
    return req_url.args[i];
}
