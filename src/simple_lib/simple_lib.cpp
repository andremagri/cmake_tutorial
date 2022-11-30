#include <iostream>

#include "simple_lib.h"
#include "config.hpp"

void print_message()
{
    std::cout << "Message from simple_lib" << std::endl;
}

void print_version()
{
    std::cout << "Project: " << project_name << std::endl;
    std::cout << "Version: " << project_version << std::endl;
}

