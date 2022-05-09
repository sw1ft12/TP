cmake_minimum_required(VERSION 3.0)
project(C)
add_executable(C main.cpp)
set_target_properties(C PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
set_target_properties(C mylib PROPERTIES
                        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../lib
                        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin)
target_include_directories(C PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../)
target_link_libraries(C mylib)
target_link_libraries(C index)

