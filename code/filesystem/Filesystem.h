#pragma once

#include <string_view>

class Filesystem {
public:
        static std::string_view GetPath(const int argc, const char **argv);
        static std::string_view ReadFile(const std::string_view &path);
};