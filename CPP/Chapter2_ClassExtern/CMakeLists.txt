set(MAIN_FILES
        Const_0_Overload.cpp
        Const_1_ModifyDataMember.cpp
        Const_2_ModifyFunctionMember.cpp
        Const_3_ModifyObject.cpp

        Static_1_ModifyDataMember.cpp
        Static_2_ModifyFunctionMember.cpp
        Static_3_App_Server.cpp
        Static_4_App_Singleton.cpp
        Static_5_App_RenderTree.cpp

        StaticWithConst.cpp

        Pointer_1_Function.cpp
        Pointer_2_ClassNonStaticMember.cpp
        Pointer_3_ClassStaticMember.cpp
        Pointer_4_App_UnitInterface.cpp
        Pointer_5_App_NoSightInterface.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(name ${file} NAME_WE)
    add_executable(${name} ${file})
endforeach ()