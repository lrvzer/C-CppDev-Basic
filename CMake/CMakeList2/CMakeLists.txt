cmake_minimum_required(VERSION 3.22)
project(CMakeList2 C)

set(CMAKE_C_STANDARD 99)

# 阶段三
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/)
# 阶段五
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/)
#set(SOURCES
#        alg/add/add.c
#        alg/sub/sub.c)
#
#set(MAIN_FILES
#        exec/add_example.c
#        exec/sub_example.c)

# 阶段四
set(MODULES alg exec)
foreach (module ${MODULES})
    add_subdirectory(${module})
endforeach ()


#foreach (file ${MAIN_FILES})
#    get_filename_component(filename ${file} NAME_WE)
#    add_executable(${filename} ${file})
#    target_link_libraries(${filename} alg)
#endforeach ()