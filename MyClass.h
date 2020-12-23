
#ifndef DATA_SCTRUCTS_1_MyClass_H
#define DATA_SCTRUCTS_1_MyClass_H

#include "List.h"

/***
* STRUCT FOR THE CLASS OBJECT
* @var _index, _id_of_course, _views, _views_of_class : the class index,
* ID of course related, number of views for the class, ptr to the node in general views list of sum equal to views
* using getters and setters
*/
class MyClass{
private:
    int _views; //number of total views
    ListNode* _views_of_class; //link to the sum node in the list (not specific node to head of sum connected to num of views
public:
    MyClass(int index, int id_of_course);
    MyClass() = default; // shouldn't really use this - think of a better way?
    MyClass(const MyClass& myClass);
    ~MyClass() = default; // should be implemented?
    MyClass& operator=(const MyClass& myClass) = default;

    //getters + setters
    ListNode* getListOfViews();
    int getViews();
    void setListOfViews(ListNode* new_sum_of_views);
    void setViews(int views);
};

#endif //DATA_SCTRUCTS_1_MyClass_H
