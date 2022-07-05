set(MAIN_FILES
        PS_1_processSpace.c
        PS_2_Stack.c
        PS_3_Exec.c
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()