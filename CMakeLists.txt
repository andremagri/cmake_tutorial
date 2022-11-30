cmake_minimum_required(VERSION 3.16)

project(MyExample VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(COMPILE_CONSOLE_TEST "Whether to compile the console tests" ON)

add_subdirectory(configured)
add_subdirectory(src)
if(COMPILE_CONSOLE_TEST)
    add_subdirectory(console)
endif()

