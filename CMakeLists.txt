
#Change this if you need to target a specific CMake version
cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
project(ansicpp)

# Enable debug symbols by default
if(CMAKE_BUILD_TYPE STREQUAL "")
  set(CMAKE_BUILD_TYPE Debug)
endif()

include_directories("${PROJECT_BINARY_DIR}")
include_directories(include)

# Define sources and executable
set(LIBRARY_NAME "ansicpp")
add_library(${LIBRARY_NAME} src/ansicpp.cpp)
target_compile_features(ansicpp PRIVATE cxx_range_for cxx_auto_type)



add_executable (quick_test test/quick_test.cpp)
target_link_libraries(quick_test ${LIBRARY_NAME})


enable_testing()
add_test(quick_test quick_test)




