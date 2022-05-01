#pragma once
#include <string.h>

namespace pine {
const char* file_extension_to_mime(const char* extension);
bool file_extension(const char* file_name, char* extension, size_t max);
};
