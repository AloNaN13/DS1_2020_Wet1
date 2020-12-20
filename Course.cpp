#include "MyClass.h"

#include <string.h>
#include <iostream>
#include "Course.h"
#include "List.h"

using std::ostream;
using std::cout;

/* NO NEED FOR THIS CTOR
Course::Course(const int id, MyClass* p,int tot_views,int num_of_classes): _id(id), _p(p),_tot_views(tot_views),_num_of_classes(num_of_classes) {

    // ALON: I don't think we need this - it will never happen

    if(_id<0){
        cout<<INVALID_INPUT;
    }
    if((_id!=id)||(_p==NULL)){
        cout<<ALLOCATION_ERROR;
    }

}

*/

Course::Course(const int id, /*MyClass* p,*/int num_of_classes):
        _id(id), /*_p(p), */_tot_views(0), _num_of_classes(num_of_classes) {
    _p = new MyClass[num_of_classes];
    for(int i = 0; i < num_of_classes; i++){
        //check the "new" here - if needed someplace else also
        MyClass my_class = *(new MyClass(i,id));
        _p[i] = my_class;
    }
};


Course::Course(const Course& course):
        _id(course._id), _tot_views(course._tot_views),
        _num_of_classes(course._num_of_classes) {
    _p = new MyClass[course._num_of_classes];
    for(int i = 0; i < course._num_of_classes; i++){
        this->_p[i] = course._p[i];
    }
}

int Course::getId(){
    return _id;
}

MyClass* Course::getClasses(){
    return _p;
}

int Course::getNumOfClasses(){
    return (_num_of_classes);
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
void Course::setNumOfClasses(int n){
    _num_of_classes = _num_of_classes+n;
}
void Course::setTotViews(int i) {
    _tot_views = i;
}

/*
void Course::deleteClass(int index) {
 //   MyClass tmp(_p[index]);
    if(this->getNumOfClasses() == 1){
        delete[] _p;
        return;
    }



    // ALON TO SVETA - WHAT IS THIS FOR? WE ALWAYS DELETE ALL OF THE CLASSES AT THE END...
    _p[index] = _p[this->getNumOfClasses()-1];

 //   _p[index].setIndex(index);
    this->setNumOfClasses(this->getNumOfClasses()-1);
    _p[this->getNumOfClasses()-1].deleteClass();
    return;
}
*/
