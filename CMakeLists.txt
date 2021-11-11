cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 17)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/bin)
project(PowerFlow CXX)

add_subdirectory(src)