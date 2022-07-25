set(MAIN_FILES
        Inherit_1_Pattern.cpp
        Inherit_2_Composition.cpp
        Inherit_3_Constructor.cpp
        Inherit_4_CopyConstructor.cpp
        Inherit_5_OperatorAssignment.cpp
        Inherit_6_FriendFunction.cpp
        Inherit_7_App.cpp
        Inherit_8_Virtual.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()