
#ifndef DATA_SCTRUCTS_1_COURSE_H
#define DATA_SCTRUCTS_1_COURSE_H

#include <iostream>
#include "MyClass.h"
#include "CoursesManager.h"

using std::string;
using std::ostream;

class Course{
private:
    int _id;
    MyClass _p[];
    int _tot_views;
public :
    Course() = default;
    Course(const Course &course) = default;
    Course(const int id, MyClass p[],int tot_views );
    ~Course();
    int getId();
    MyClass* getClasses();
    int getTotViews();
    void setId(int i);
    void setClasses(MyClass *p);
    void setTotViews(int i);
    int getNumOfClasses();
    void deleteClass(int index);
};

#endif //DATA_SCTRUCTS_1_COURSE_H
