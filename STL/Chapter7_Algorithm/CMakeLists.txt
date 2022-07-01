cmake_minimum_required(VERSION 3.22)
project(STL)

set(CMAKE_CXX_STANDARD 14)

set(MAIN_FILES
        # 排序
        Sort.cpp
        Partition.cpp
        Shuffle.cpp

        # 查找
        Find.cpp
        Search.cpp
        Search_n.cpp

        # 删除和替换
        Remove.cpp
        Unique.cpp

        # 排列组合
        Permutation.cpp

        # 集合
        SetUnion.cpp
        SetDiff.cpp
        SetIntersection.cpp
        )

foreach (file ${MAIN_FILES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach ()