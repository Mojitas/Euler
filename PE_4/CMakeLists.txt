cmake_minimum_required(VERSION 3.14)
project(PE_4)

set(CMAKE_CXX_STANDARD 14)

add_executable(PE_4
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/PE_4.cbp
        CMakeLists.txt
        main.c)
