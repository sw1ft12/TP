cmake_minimum_required(VERSION 3.0)

if(${ARM_BUILD} STREQUAL "ON")
    set(CMAKE_SYSTEM_NAME Linux)
    set(CMAKE_SYSTEM_PROCESSOR arm)
    set(CMAKE_C_COMPILER ${TOOLCHAIN}/aarch64-linux-gnu-gcc)
    set(CMAKE_CXX_COMPILER ${TOOLCHAIN}/aarch64-linux-gnu-g++)
    set(CMAKE_INSTALL_RPATH ${CMAKE_INSTALL_PREFIX}/lib)
endif()

project(SimpleLibrary)

add_subdirectory(src)
add_executable(Main main.cpp)
add_executable(MainLib main_lib.cpp)
target_link_libraries(MainLib PRIVATE buffer)
install(TARGETS Main MainLib buffer buffer.h 
       RUNTIME DESTINATION bin
       LIBRARY DESTINATION lib
       INCLUDES DESTINATION include)
