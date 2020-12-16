//
// Created by svet on 12/3/2020.
//

#ifndef DATA_STRUCTS_1_COURSESMANAGER_H
#define DATA_STRUCTS_1_COURSESMANAGER_H

#include "AvlTree.h"
#include "list.h"
#include "Course.h"
#include "MyClass.h"

// enums instead of exceptions
// change to CM_StatusType? typedef?
typedef enum CMResult_t{
    CM_SUCCESS,
    CM_ALLOCATION_ERROR,
    CM_FAILURE,
    CM_INVALID_INPUT
}CMResult;


class CoursesManager {
    //should be private!
private:
    AvlTree<Course,int> general_course_tree;
    List general_views_list;
    int num_of_courses;
public:
    //ctor+dtor+ccot+assignop
    CoursesManager(): total_num_of_courses(0) {}; // need to implement it more explicitly?
    ~CoursesManager() = default;
    CoursesManager(const CoursesManager& courses_manager) = default;
    CoursesManager& operator=(const CoursesManager& courses_manager) = default;

    //getters
    //AvlTree<Course,int>& getGeneralCourseTree() {return this->general_course_tree;};
    //List& getGeneralViewsList() {return this->general_views_list;};
    //any need for getter or setter for total_nunm_of_courses?

    //functions needed to be implemented in task
    // implement the init in library - using the ctor
    StatusType AddCourse (void *DS, int courseID, int numOfClasses);
    StatusType RemoveCourse(void *DS, int courseID);
    StatusType WatchClass(void *DS, int courseID, int classID, int time);
    StatusType TimeViewed(void *DS, int courseID, int classID, int *timeViewed);
    StatusType GetMostViewedClasses(void *DS, int numOfClasses, int *courses, int *classes);
    // implement the quit in library - using delete

};


#endif //DATA_STRUCTS_1_COURSESMANAGER_H
