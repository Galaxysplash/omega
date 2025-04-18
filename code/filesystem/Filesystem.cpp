#include "Filesystem.h"

#include <stdexcept>
#include <fstream>
#include <memory/BufferSize.h>

std::string_view Filesystem::GetPath(const int argc, const char **argv) {
        if (argc > 1) {
                return argv[1];
        }

        throw std::runtime_error("Filesystem: No path given");
}

std::string_view Filesystem::ReadFile(const std::string_view &path) {
        std::ifstream file(path.data());
        std::string content;
        constexpr EBufferSize bufferSize = MB;

        if (!file.is_open()) {
                throw std::runtime_error("Filesystem: Could not open file");
        }

        content.reserve(bufferSize);

        if (content.size() != bufferSize) {
                throw std::runtime_error("Filesystem: Failed to allocate memory for ReadFile");
        }

        file.read(content.data(),bufferSize);

        if (file.fail()) {
                throw std::runtime_error("Filesystem: Failed to read file");
        }

        return std::string_view{content};
}
