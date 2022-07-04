set(MAIN_FILES
        Introduce_1_Add.cpp
        Introduce_2_Fib.cpp
        Introduce_3_Fac.cpp
        )


foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()