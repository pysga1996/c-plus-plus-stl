cmake_minimum_required(VERSION 3.16)
project(stl)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE VECTOR_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "vector/*.cpp")
add_executable(vector ${VECTOR_SOURCES})