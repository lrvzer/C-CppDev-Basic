cmake_minimum_required(VERSION 3.22)
project(DataStructure)

set(CMAKE_CXX_STANDARD 11)

set(MODULES
        high-precision
        prefix-sum
        difference
        )

foreach (module ${MODULES})
    add_subdirectory(${module})
endforeach ()