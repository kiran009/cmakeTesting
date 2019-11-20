# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.0)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 14)
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
#add_executable(${EXEC} ${SOURCES})
add_executable(main src/main/main.cpp src/main/extra.cpp)

set(CMAKE_INSTALL_TMPDIR /tmp CACHE PATH "Output dir for tmp")
set(CPACK_COMPONENTS_ALL_IN_ONE_PACKAGE 1)
set(CPACK_PACKAGE_NAME "mytest")
set(CPACK_PACKAGE_VENDOR "tets")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "fake rpm")
set(CPACK_PACKAGE_VERSION "6.6.6")
set(CPACK_PACKAGE_VERSION_MAJOR "6")
set(CPACK_PACKAGE_VERSION_MINOR "6")
set(CPACK_PACKAGE_VERSION_PATCH "6")
set(CPACK_GENERATOR "RPM")
#set(CPACK_RPM_PACKAGE_ARCHITECTURE "noarch")
set(targetDestDir ${CMAKE_INSTALL_TMPDIR})
install(FILES "${CMAKE_CURRENT_SOURCE_DIR}/install.txt" DESTINATION "${targetDestDir}")
install(TARGETS main DESTINATION bin)
set(CPACK_RPM_PRE_INSTALL_SCRIPT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/pre.sh")
set(CPACK_RPM_POST_INSTALL_SCRIPT_FILE "${CMAKE_CURRENT_SOURCE_DIR}/post.sh")
include(CPack)
