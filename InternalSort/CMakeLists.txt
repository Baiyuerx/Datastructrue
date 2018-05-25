project(InternalSort)

set(CMAKE_CXX_STANDARD 11)

set(Sort_SRC Sort.h sortmain.cpp)
add_executable(sortmain ${Sort_SRC})