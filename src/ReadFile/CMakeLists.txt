project(ReadFile CXX)

add_library(ReadFile)

target_sources(ReadFile
                PUBLIC
                readFile.cpp
                PRIVATE 
                readFile.hpp)

target_include_directories(ReadFile 
                PUBLIC 
                ${CMAKE_CURRENT_SOURCE_DIR})