
#Change this if you need to target a specific CMake version
cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
project(ansicpp)

# Enable debug symbols by default
if(CMAKE_BUILD_TYPE STREQUAL "")
  set(CMAKE_BUILD_TYPE Debug)
endif()

include_directories("${PROJECT_BINARY_DIR}")

# Define sources and executable
set(LIBRARY_NAME "ansicpp")
add_library(${LIBRARY_NAME} src/ansicpp.cpp)
include_directories(include)


#target_compile_features(ansicpp PRIVATE cxx_range_for cxx_auto_type)


