cmake_minimum_required(VERSION 3.5)

set(TARGET_NAME test_ptr)
project (${TARGET_NAME})

# Set Debug or Release
# ======================================
# set(CMAKE_BUILD_TYPE Debug CACHE STRING "set build type to debug") 

# set output position
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/lib/Debug)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/lib/Release)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# set link directory
link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG})

# ===========================================
# header part: Configuration header file
# Add include path to search path
include_directories(./)
 
# ============================================
# src part:
# all source code
add_executable(${TARGET_NAME} ./main.cpp)

set(CMAKE_CXX_FLAGS   "-std=c++11")             # c++11
