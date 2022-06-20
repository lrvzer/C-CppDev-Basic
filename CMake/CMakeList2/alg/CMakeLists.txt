cmake_minimum_required(VERSION 3.22)
project(CMakeList2 C)

set(CMAKE_C_STANDARD 99)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../lib)

set(MODULES
        add
        sub
        )

foreach(module ${MODULES})
    add_subdirectory(${module})
endforeach()

#set(SRCS ${SRCS} PARENT_SCOPE)
add_library(alg STATIC ${SRCS})

install(FILES ../include/add.h DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/../output/include)
install(FILES ../include/sub.h DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/../output/include)
install(FILES ../lib/libalg.a DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/../output/include)
