add_library(simple_lib STATIC simple_lib.cpp)

target_include_directories(simple_lib PUBLIC 
    "./"
    "${CMAKE_BINARY_DIR}/configured/include")
