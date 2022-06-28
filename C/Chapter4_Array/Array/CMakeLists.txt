cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        introduce.c
        initialize.c
        address.c
        ambiguity.c
        variable_length_array.c

        app_ave_sum.c
        app_max_min.c
        app_select_sort.c
        app_select_sort_pro.c
        app_binary_search.c
        app_merge.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()