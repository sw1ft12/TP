cmake_minimum_required(VERSION 3.0)
project(A)

find_package(Python3 REQUIRED)
if(NOT Python3_FOUND)
    message(FATAL_ERROR "Python not found. Install Python first")
endif()
execute_process(COMMAND python3 "preparing.py" WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})

add_library(index SHARED index.cpp)
set_target_properties(index PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
