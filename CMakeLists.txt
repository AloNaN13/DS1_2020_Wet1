cmake_minimum_required(VERSION 3.13)
project(DS1_2020_Wet1)

set(CMAKE_CXX_STANDARD 14)


include_directories(.)

add_executable(DS1_2020_Wet1
        AVL_tests_OLD.h
        AvlTree.h
        AvlTree_OLD.h
        Course.cpp
        Course.h
        CoursesManager.cpp
        CoursesManager.h
        library.cpp
        library.h
        List.cpp
        List.h
        #main.cpp
        main1.cpp
        MyClass.cpp
        MyClass.h
        )
