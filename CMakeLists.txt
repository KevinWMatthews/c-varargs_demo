cmake_minimum_required(VERSION 3.5.2)
project(varargs_demo VERSION 1.0.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib")

add_subdirectory(src)
add_subdirectory(examples)
