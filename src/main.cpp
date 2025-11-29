#include <fstream>
#include <iostream>
#include <string>

#include "../include/utils/read_src.h"

int main(int argc, char* argv[])
{

    const char* SOURCE_FILE_NAME = argv[1];

    std::fstream file(SOURCE_FILE_NAME);
    if (!file.is_open())
    {
        std::cerr << "Failed to open file: " << SOURCE_FILE_NAME << std::endl;
        return 1;
    }

    std::string src = read_src(SOURCE_FILE_NAME);

    std::cout << src << std::endl;

    return 0;
}
