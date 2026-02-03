cmake_minimum_required(VERSION 4.0)
project(variant_2)

set(CMAKE_CXX_STANDARD 20)

add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")

add_executable(variant_2 main.cpp
        format.cpp
        format.h
        modules/Modules.cpp
        modules/Modules.h
        modules/scripts/task23.cpp
        modules/scripts/task39.cpp
        modules/scripts/task16.cpp
        modules/scripts/task32.cpp
        modules/scripts/task9.cpp
)
