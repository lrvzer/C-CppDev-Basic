set(MAIN_FILES
        EC_1_TypeEnhance.cpp
        EC_2_CIN.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()

add_executable(EC_5_NameMangling myString.cpp EC_5_NameMangling.cpp)