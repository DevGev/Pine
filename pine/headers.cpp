#include <pine/headers.h>
#include <string.h>

void pine::set_header_value(http_header_t& header, const char* key, const char* value)
{
    memset(header.entries[header.num_entries].key, 0, 100);
    strcpy(header.entries[header.num_entries].key, key);

    memset(header.entries[header.num_entries].value, 0, 100);
    strcpy(header.entries[header.num_entries].value, value);
    header.num_entries++;
}

std::string pine::header_value(const http_header_t& header, const char* key)
{
    for (size_t i = 0; i < header.num_entries; i++)
        if (strncmp(header.entries[i].key, key, strlen(key)) == 0)
            return header.entries[i].value;
    return {};
}

int pine::parse_until(const char* raw_header, char* data, char delim1, char delim2, size_t size, size_t position, bool lower)
{
    for (size_t i = 0; i < size; i++) {
        if ((raw_header[position + i] == delim1) || (delim2 && raw_header[position + i] == delim2)) {
            data[i] = 0;
            position += i + 1;
            return position;
        }
        char next = raw_header[position + i];
        data[i] = (lower) ? tolower(next) : next;
    }
    return position;
}

void pine::parse_header(http_header_t& header, const char* raw_header)
{
    int entry = 0;
    size_t position = 0;
    size_t size = strlen(raw_header);

    position = parse_until(raw_header, header.method, ' ', 0, 10, position);
    position = parse_until(raw_header, header.url, ' ', '?', 512, position);

    while (raw_header[position] != '\n')
        position++;
    position++;

    while (position + 2 < size) {
        position = parse_until(raw_header, header.entries[entry].key, ':', 0, 100, position, true);
        position += (raw_header[position] == ' ') ? 1 : 0;
        position = parse_until(raw_header, header.entries[entry].value, '\r', 0, 100, position);
        position += 1;
        entry++;
    }

    header.num_entries = entry;
}
