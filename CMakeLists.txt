cmake_minimum_required(VERSION 3.10)
project(dummy_cmake_project VERSION 0.0.0.3)

set(CMAKE_CXX_STANDARD 17)
ADD_SUBDIRECTORY(bump-version)

configure_file(configuration.h.in configuration.h @ONLY)
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_executable(dummy_cmake_project main.cpp ${CMAKE_CURRENT_BINARY_DIR}/configuration.h)
