#include <iostream>
#include <string>

#include "../include/utils/read_src.h"

int main(int argc, char* argv[])
{
    std::string src = read_src(argv[1]);

    std::cout << src << std::endl;

    return 0;
}
