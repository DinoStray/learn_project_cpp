cmake_minimum_required(VERSION 3.9)
project(learn_project)

set(CMAKE_CXX_STANDARD 11)

include_directories(third-libs)

add_subdirectory(utils)
add_subdirectory(third-party/catch)
add_subdirectory(01-c)
add_subdirectory(04-algorithm)