cmake_minimum_required(VERSION 3.12)
project(graduate)

set(CMAKE_CXX_STANDARD 14)

add_executable(graduate main.cpp)
add_executable(c_hello com.graduate/c/hello/hello_world.c)
add_executable(c_printf_scanf com.graduate/c/print_scanf.c)
add_executable(c_point com.graduate/c/point.c)
add_executable(c_arr com.graduate/c/arr/arr.c)