#include <pine/request.h>
#include <algorithm>
#include <sstream>

pine::request::request(const std::string& raw_header)
{
    req_raw_header = raw_header;
    parse_header();
}

pine::request::~request()
{
}

std::string pine::request::header(std::string key)
{
    std::transform(key.begin(), key.end(), key.begin(),
    [](unsigned char c){ return std::tolower(c); });
    return header_value(headers, key.c_str());
}

void pine::request::set_header(const std::string& key, const std::string& value)
{
    set_header_value(headers, key.c_str(), value.c_str());
}

void pine::request::parse_header()
{
    pine::parse_header(headers, req_raw_header.c_str());
}
