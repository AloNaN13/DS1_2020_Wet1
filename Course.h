//
// Created by svet on 12/2/2020.
//

#ifndef DATA_SCTRUCTS_1_COURSE_H
#define DATA_SCTRUCTS_1_COURSE_H
#include <iostream>
#include "MyClass.h"
#include "CoursesManager.h"

using std::string;
using std::ostream;



class Course
{
    int _id;
    MyClass _p[];
public :
    Course() = default;
    Course(const Course &course) = default;
    Course(const int id, MyClass p[] );
    ~Course();
    int getId();
    MyClass* getClasses();
    void setId(int i);
    void setClasses(MyClass *p);
    int getNumOfClasses();

};
#endif //DATA_SCTRUCTS_1_COURSE_H
