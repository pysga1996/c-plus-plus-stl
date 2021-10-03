cmake_minimum_required(VERSION 3.16)
project(stl)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE VECTOR_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "vector/*.cpp")
add_executable(vector ${VECTOR_SOURCES})

file(GLOB_RECURSE LIST_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "list/*.cpp")
add_executable(list ${LIST_SOURCES})

file(GLOB_RECURSE SET_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "set/*.cpp")
add_executable(set ${SET_SOURCES})

file(GLOB_RECURSE STACK_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "stack/*.cpp")
add_executable(stack ${STACK_SOURCES})

file(GLOB_RECURSE QUEUE_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "queue/*.cpp")
add_executable(queue ${QUEUE_SOURCES})

file(GLOB_RECURSE MAP_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "map/*.cpp")
add_executable(map ${MAP_SOURCES})

file(GLOB_RECURSE BITSET_SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "bitset/*.cpp")
add_executable(bitset ${BITSET_SOURCES})