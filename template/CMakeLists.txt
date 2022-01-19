cmake_minimum_required(VERSION 3.5)

set(TARGET_NAME test_template)

project (${TARGET_NAME})

# set output position
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(./)

add_executable(${TARGET_NAME} ./main.cpp ./template.hpp ./template.cpp)

set(CMAKE_CXX_FLAGS   "-std=c++11")             # c++11
