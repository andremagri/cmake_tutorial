
set(EXECUTABLE_NAME test)

add_executable(${EXECUTABLE_NAME} main.cpp)

target_link_libraries(${EXECUTABLE_NAME} PUBLIC simple_lib)

