set(MAIN_FILES
        Polymorphism_1_AssignCompatible.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()