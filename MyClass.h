#define DATA_SCTRUCTS_1_MyClass_H
#include <iostream>
#include"list.h"
#include "CoursesManager.h"

class MyClass
{
    int _index; //index of class
    int _id_of_course; //id of related course
    int _views; //number of total views
    *list _views_of_class; //link to the sum

public :
    MyClass(int index, int id_of_course);
    MyClass() = default;
    MyClass(MyClass &MyClass) = default;
    ~MyClass();
    //get func
    int getIndex();
    list* getListOfViews();
    int getViews();
    int getIdOfCourse();
    //set func
    void setIdOfCourse(const int id);
    void setIndex(int i);
    void setListOfViews(list* new_sum_of_views);
    void setViews(int views);

};
#endif //DATA_SCTRUCTS_1_MyClass_H