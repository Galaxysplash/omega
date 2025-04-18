#include "Filesystem.h"

#include <stdexcept>
#include <fstream>

std::string_view Filesystem::GetPath(const int argc, const char **argv) {
    if (argc > 1) {
        return argv[1];
    }

    throw std::runtime_error("Filesystem: No path given");
}

std::string& Filesystem::ReadFile(const std::string_view &path) {
    std::ifstream file(path.data());
    std::string content;

    if (!file.is_open()) {
        throw std::runtime_error("Filesystem: Could not open file");
    }

    file.read()
}
