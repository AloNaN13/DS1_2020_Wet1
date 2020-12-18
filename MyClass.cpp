#include <string.h>
#include "MyClass.h"
#include <iostream>
#include "AvlTree.h"
#include "CoursesManager.h"
#include "Course.h"
#include "List.h"

using std::endl;
using std::cout;

MyClass::MyClass(int index, int id_of_course):_index(index),_id_of_course(id_of_course),_views(0),_views_of_class(NULL){
/*
    if((_index<0)||(general_courses_tree.find(_id_of_course)==-1){
        cout<<INVALID_INPUT;
    }
    if((_id_of_course!=id_of_course)||(id_of_course!=_id_of_course)){
        cout<<ALLOCATION_ERROR;
        }
        */
}
//get func
int MyClass::getIdOfCourse() {
    return _id_of_course;
}

int MyClass::getIndex() {
    return _index;
}

ListNode* MyClass::getListOfViews() {
    return _views_of_class;
}

int MyClass::getViews() {
    return _views;
}

void MyClass::setIndex(int i) {
    _index = i;
}

void MyClass::setIdOfCourse(const int id) {
    _id_of_course = id;
}

void MyClass::setListOfViews (ListNode* new_sum_of_views) {
    _views_of_class = new_sum_of_views;
}

void MyClass::setViews(int views) {
    _views = views;
}
void MyClass::deleteClass(){
    delete _views_of_class;
    delete this;}


