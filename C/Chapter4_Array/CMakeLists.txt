cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MODULES
        Array
        DArray
        )

foreach (module ${MODULES})
    add_subdirectory(${module})
endforeach ()