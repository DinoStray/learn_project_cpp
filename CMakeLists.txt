cmake_minimum_required(VERSION 3.9)
project(learn_project)

set(CMAKE_CXX_STANDARD 11)

include_directories(third-libs)

file(GLOB_RECURSE LEARN_C 01-c/*.cc)

add_executable(learn_project ${LEARN_C})