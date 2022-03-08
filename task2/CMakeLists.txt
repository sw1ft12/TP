cmake_minimum_required(VERSION 3.0)

project(C)

execute_process(COMMAND python3 "preparing.py" WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/A)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall")
set(SOURCES C/main.cpp A/preparing.py)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)


include_directories(${PROJECT_SOURCE_DIR})
add_executable(C ${SOURCES})

add_subdirectory(B)
target_link_libraries(C mylib)
