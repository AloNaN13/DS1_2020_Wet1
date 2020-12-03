#include "MyClass.h"

#include <string.h>
#include <iostream>
#include "Course.h"
#include "list.h"

using std::ostream;
using std::cout;
Course::Course(const int id, MyClass p[],int tot_views): _id(id), _p(p),_tot_views(tot_views) {

    if(_id<0){
        cout<<INVALID_INPUT;
    }
    if((_id!=id)||(_p==NULL)){
        cout<<ALLOCATION_ERROR;
    }
}
int Course::getId(){
    return _id;
}
MyClass* Course::getClasses(){
    return _p;
}

int Course::getNumOfClasses(){
    return (_p->size());
}

void Course::setId(int i){
    _id = i;
}
void Course::setClasses(MyClass *p){
    _p = p;
}
int Course::getTotViews() {
    return _tot_views;
}
void Course::setTotViews(int i) {
    _tot_views = i;
}
void Course::deleteClass(int index) {
    MyClass tmp = new Course(*_p[index]);
    if(this->getNumOfClasses()==1)
    {
        delete _p;
        return;
    }
    _p[index] = _p[this->getNumOfClasses()-1];
 //   _p[index].setIndex(index);
    delete _p[this->getNumOfClasses()-1];
}
//
// Created by svet on 12/2/2020.
//

