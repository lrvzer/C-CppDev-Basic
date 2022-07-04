cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

add_executable(String_lib_Client myString.c String_lib_Client.c)