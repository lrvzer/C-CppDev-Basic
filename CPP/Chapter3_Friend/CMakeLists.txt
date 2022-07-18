set(MAIN_FILES
        Friend_1_LifeBlood.cpp
        Friend_2_Complex.cpp
        Friend_3_FriendFunction.cpp
        Friend_4_FriendClass.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()