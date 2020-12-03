//
// Created by svet on 12/3/2020.
//

#ifndef DATA_STRUCTS_1_COURSESMANAGER_H
#define DATA_STRUCTS_1_COURSESMANAGER_H

#include "AvlTree.h"
#include "list.h"
#include "Course.h"
#include "MyClass.h"

enum StatusType {ALLOCATION_ERROR,SUCCESS,FAILURE,INVALID_INPUT};

class CoursesManager {
AvlTree <Course,int> general_course_tree;
list general_views_list;

public:
    StatusType AddCourse (void *DS, int courseID, int numOfClasses);
    StatusType RemoveCourse(void *DS, int courseID);
};


#endif //DATA_STRUCTS_1_COURSESMANAGER_H
