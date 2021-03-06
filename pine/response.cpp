#include <pine/response.h>
#include <pine/mime.h>
#include <string.h>
#include <unistd.h>
#include <fstream>
#include <sstream>

pine::response::response()
{
    response_line = "HTTP/1.1 200";
    set_header_value(headers, "Content-Type", "text/plain");
    set_header_value(headers, "Server", "pine");
}

pine::response::~response()
{
    set_text(0);
}

bool pine::response::set_content_file(const std::string& file_name)
{
    set_text(0);
    FILE* file = fopen(file_name.c_str(), "rb");
    if (file == NULL)
        return false;

    fseek(file, 0, SEEK_END);
    long int size = ftell(file);
    content_size = size;
    fclose(file);

    file = fopen(file_name.c_str(), "rb");
    content = new char[content_size];
    fread(content, sizeof(char), size, file);
    fclose(file);

    char extension[100];
    if (file_extension(file_name.c_str(), extension, 100))
        set_header("Content-Type", file_extension_to_mime(extension));
    return true;
}

void pine::response::set_content(const std::string& new_content)
{
    set_text(0);
    content = new char[new_content.size()];
    content_size = new_content.size();
    memcpy(content, new_content.c_str(), content_size);
}

void pine::response::set_text(const std::string& new_content)
{
    set_text(new_content.c_str());
}

void pine::response::set_text(const char* new_content)
{
    if (content_size) {
        content_size = 0;
        delete[] content;
    }

    if (!new_content)
        return;

    size_t size = strlen(new_content);
    content = new char[size];
    content_size = size;
    strcpy(content, new_content);
}

void pine::response::set_header(const std::string& key, const std::string& value)
{
    set_header_value(headers, key.c_str(), value.c_str());
}

bool pine::response::set_response_code(int code)
{
    std::string response_code_str = std::to_string(code);
    if (response_code_str.size() != 3)
        return false;
    response_line = "HTTP/1.1 " + response_code_str;
    response_code = code;
    return true;
}

void pine::response::header(char* header, size_t size)
{
    strcat(header, response_line.c_str());
    strcat(header, "\r\n");

    for (size_t i = 0; i < headers.num_entries; i++) {
        strcat(header, headers.entries[i].key);
        strcat(header, ": ");
        strcat(header, headers.entries[i].value);
        strcat(header, "\r\n");
    }

    std::string size_str = std::to_string(content_size);
    strcat(header, "Content-Length: ");
    strcat(header, size_str.c_str());
    strcat(header, "\r\n\r\n");
}
