
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



add_executable (clear_screen_test test/clear_screen.cpp)
target_link_libraries(clear_screen_test ${LIBRARY_NAME})


enable_testing()
add_test(clear_screen_test clear_screen_test)




