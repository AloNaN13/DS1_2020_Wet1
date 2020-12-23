
#ifndef DATA_STRUCTS_1_COURSE_H
#define DATA_STRUCTS_1_COURSE_H

#include "MyClass.h"


/***
* STRUCT FOR THE COURSE OBJECT
* @var _id, _classes_array, _tot_views, _num_of_classes : the course ID, classes array, total course views, number of classes
* using getters and setters
*/
class Course{
private:
    int _id;
    MyClass* _classes_array;
    int _num_of_classes;
public:
    Course(const int id, int num_of_classes);
    ~Course() {delete [] _classes_array;};
    Course(const Course &course);
    Course& operator=(const Course &course) = default;

    MyClass* getClasses();
    int getNumOfClasses();
};

#endif //DATA_STRUCTS_1_COURSE_H
