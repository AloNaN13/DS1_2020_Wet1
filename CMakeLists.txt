<<<<<<< HEAD
cmake_minimum_required(VERSION 3.15)
project(DS1_2020_Wet1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(DS1_2020_Wet1
        AVL_tests_OLD.h
        AvlTree_OLD.h
        library.h
        library.cpp
        main1.cpp
        List.cpp
        List.h
)

cmake_minimum_required(VERSION 3.10)
project(DS1_2020_Wet1)

set(CMAKE_CXX_STANDARD 11)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic-errors -Werror")

add_executable(Course.h
        Course.cpp
        MyClass.cpp
        MyClass.h
        AvlTree.h
        Views.h
        Views.cpp
        CoursesManager.cpp
        CoursesManager.h)
>>>>>>> main
