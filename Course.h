
#ifndef DATA_SCTRUCTS_1_COURSE_H
#define DATA_SCTRUCTS_1_COURSE_H

#include <iostream>
#include "MyClass.h"
#include "List.h"

using std::string;
using std::ostream;

class Course{
private:
    int _id;
    MyClass* _p;
    int _tot_views;
    int _num_of_classes;

public:
    Course() = default;
    Course(const int id, MyClass* p,int tot_views,int num_of_classes);
    Course(const int id, MyClass* p,int num_of_classes);
    ~Course() = default;
    //Course(const Course &course) = default;
    int getId();
    MyClass* getClasses();
    int getTotViews();
    void setId(int i);
    void setClasses(MyClass *p);
    void setTotViews(int i);
    int getNumOfClasses();
    void setNumOfClasses(int n);
    void deleteClass(int index);
};

#endif //DATA_SCTRUCTS_1_COURSE_H
