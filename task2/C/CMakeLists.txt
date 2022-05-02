cmake_minimum_required(VERSION 3.0)
project(C)
add_executable(exec main.cpp)
set_target_properties(exec PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
set_target_properties(exec mylib PROPERTIES
                        LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../lib
                        RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../bin)
target_include_directories(exec PUBLIC
                         ${CMAKE_CURRENT_SOURCE_DIR}/../B
                         ${CMAKE_CURRENT_SOURCE_DIR}/../A)
target_link_libraries(exec mylib)
target_link_libraries(exec index)

