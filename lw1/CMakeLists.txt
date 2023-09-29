cmake_minimum_required(VERSION 3.10)
project(Project1)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(task main.cpp func.cpp func.h)

enable_testing()
add_executable(tests test.cpp func.cpp func.h)
target_link_libraries(tests ${GTEST_LIBRARIES})

add_test(NAME BASIC COMMAND tests)
