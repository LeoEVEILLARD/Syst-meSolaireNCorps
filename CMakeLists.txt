cmake_minimum_required(VERSION 2.8)

project(space)

set (space_VERSION_MAJOR 0)
set (space_VERSION_MINOR 1)


#set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
#set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
#set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(CMAKE_BUILD_TYPE debug)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++11 -Wno-reorder")

# The following folder will be included
#include_directories("${PROJECT_SOURCE_DIR}")

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})


file(
GLOB_RECURSE
source_files
Main.cpp
Astre.cpp
System.cpp
)

add_executable(space   ${source_files})
#Astre.cpp
#                        Astre.hpp)


#find_package(Qt5Widgets)
