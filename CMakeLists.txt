cmake_minimum_required (VERSION 2.8.11)

set (CMAKE_BUILD_TYPE Debug)
# Add -O0 to remove optimizations when using gcc
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

add_executable (parent parent.c)
add_executable (childA childA.c)
add_executable (childB childB.c)
