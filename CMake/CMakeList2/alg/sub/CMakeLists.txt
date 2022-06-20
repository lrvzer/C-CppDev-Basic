cmake_minimum_required(VERSION 3.22)
project(CMakeList2 C)

set(CMAKE_C_STANDARD 99)

set(SOURCES
        sub/sub.c
        )

set(SRCS ${SRCS} ${SOURCES} PARENT_SCOPE)