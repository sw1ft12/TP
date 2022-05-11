cmake_minimum_required(VERSION 3.0)
project(B)
add_library(mylib SHARED lib.cpp lib.h)
set_target_properties(mylib PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
