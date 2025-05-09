cmake_minimum_required(VERSION 3.10)

set(This CLI-CYPHER)

project(${This} C CXX) # name of project and what language/s are used, C and C++ in this case

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_subdirectory(googletest)

set(Headers
    src/crypto.h
)
set(Sources
    src/cypher.c
    src/main.c
    src/utilities.c
)

add_library(${This} STATIC ${Sources} ${Headers})
include_directories(src)
add_subdirectory(test)