#include "MyClass.h"

#include <string.h>
#include <iostream>
#include "Course.h"
#include "list.h"

using std::ostream;
using std::cout;
Course::Course(const int id, MyClass p[]): _id(id), _p(p) {

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
//
// Created by svet on 12/2/2020.
//

