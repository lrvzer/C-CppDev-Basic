cmake_minimum_required(VERSION 3.22)
project(C)

set(CMAKE_C_STANDARD 99)

set(MAIN_FILES
        hello_world.c
        binary.c
        variable_naming_rules.c
        variable_type_size.c
        float_compare_zero.c
        float_double_valid_bit.c
        char_ascii.c
        constant.c
        io_printf.c
        io_scanf.c
        cast_force.c
        cast_promote2int.c
        cast_type_promote.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()