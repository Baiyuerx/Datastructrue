cmake_minimum_required(VERSION 3.10)
project(BasicDatastructures)

set(CMAKE_CXX_FLAGS "-std=c++11")
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_STANDARD 11)

include_directories(lib)

add_subdirectory(CppBasic ${PROJECT_BINARY_DIR}/CppBasic)
add_subdirectory(Chapter03 ${PROJECT_BINARY_DIR}/Chapter03)
add_subdirectory(Chapter04 ${PROJECT_BINARY_DIR}/Chapter04)