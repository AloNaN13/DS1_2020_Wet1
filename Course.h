
#ifndef DATA_SCTRUCTS_1_COURSE_H
#define DATA_SCTRUCTS_1_COURSE_H

#include <iostream>
#include "MyClass.h"
#include "List.h"
/***
* STRUCT FOR THE COURSE OBJECT
* @var _id, _classes_array, _tot_views, _num_of_classes : the course ID, classes array, total course views, number of classes
* using getters and setters
*/
using std::string;
using std::ostream;

class Course{
private:
    int _id;
    MyClass* _classes_array;
    int _tot_views;
    int _num_of_classes;

public:
    //Course() = default;
    //Course(const int id, MyClass* p,int tot_views,int num_of_classes);
    Course(const int id, /*MyClass* p,*/int num_of_classes);
    ~Course() {
        delete [] _classes_array;
    };
    Course(const Course &course);
    int getId();
    MyClass* getClasses();
    int getTotViews();
    void setId(int i);
    void setClasses(MyClass *p);
    void setTotViews(int i);
    int getNumOfClasses();
    void setNumOfClasses(int n);
    //void deleteClass(int index);
};

#endif //DATA_SCTRUCTS_1_COURSE_H
