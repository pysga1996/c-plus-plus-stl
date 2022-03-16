cmake_minimum_required(VERSION 3.16)
project(cpp-stl-practice)

set(CMAKE_CXX_STANDARD 20)

#Add the google test subdirectory
add_subdirectory(lib/googletest)

#include googletest/include dir
include_directories(lib/googletest/googletest/include)

#include the googlemock/include dir
include_directories(lib/googletest/googlemock/include)

include_directories(lib lib/cpp-commons/common-collection lib/cpp-commons/common-matrix lib/cpp-commons/common-number lib/cpp-commons/common-string lib/cpp-commons/common-util)

link_directories(lib)

file(GLOB_RECURSE CPP_STL_PRACTICE_SOURCE RELATIVE ${CMAKE_SOURCE_DIR} src/*.cpp src/*/*.cpp lib/cpp-commons/*.h lib/cpp-commons/*/*.h)
add_executable(cpp-stl-practice ${CPP_STL_PRACTICE_SOURCE})

target_link_libraries(cpp-stl-practice LINK_PUBLIC cpp-commons)

file(GLOB_RECURSE CPP_STL_PRACTICE_TEST RELATIVE ${CMAKE_SOURCE_DIR} src/*/*.cpp test/*.cpp test/*/*.cpp lib/*.h lib/*/*.h lib/*/*/*.h)
add_executable(cpp-stl-practice-test ${CPP_STL_PRACTICE_TEST})

#Link with GoogleTest
target_link_libraries(cpp-stl-practice-test gtest gtest_main cpp-commons)

#Link with GoogleMock
target_link_libraries(cpp-stl-practice-test gmock gmock_main cpp-commons)

