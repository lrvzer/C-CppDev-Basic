cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

add_executable(VScope_1_Auto VScope_1_Auto.c)
add_executable(VScope_2_Extern VScope_2_Extern.c Outer.c)
add_executable(VSCope_3_Static VSCope_3_Static.c)