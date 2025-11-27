#include "../../include/utils/read_src.h"

std::string read_src(const std::string& file_path) {
    std::ifstream file(file_path);
    if (!file.is_open()) {
        throw std::runtime_error("Failed to open file");
    }

    std::string content((std::istreambuf_iterator<char>(file)),
                             std::istreambuf_iterator<char>());

    return content;
}
