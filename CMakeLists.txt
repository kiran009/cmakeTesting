# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.0)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lgtest -lpthread")
set(EXEC main)
# Project's name 
project(main)
# Set the sources and output folder where your program will be created
# I../includes
include_directories(includes)
# puts all .cpp files inside src to the SOURCES variable
file(GLOB SOURCES src/main/*.cpp)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")
add_executable(${EXEC} ${SOURCES})
