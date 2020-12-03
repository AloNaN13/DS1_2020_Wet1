//
// Created by svet on 12/3/2020.
//

#ifndef DATA_STRUCTS_1_VIEWS_H
#define DATA_STRUCTS_1_VIEWS_H
#include "AvlTree.h"
#include "MyClass.h"
#include "CoursesManager.h"

using std::ostream;

class Views {
    int _sum;
    AvlTree <MyClass,int>* _tree;
public :
    Views() = default;
    Views(const Views &views) = default;
    Views(int sum,AvlTree<MyClass,int> *t );
    ~Views(){_tree.remove(_sum);};
    int getSum();
    AvlTree<MyClass,int>* getTreeOfViews();
    void setSum(int i);
    void setTreeOfViews(AvlTree<MyClass,int> *t);

};
#endif //DATA_SCTRUCTS_1_Views_H

};


#endif //DATA_STRUCTS_1_VIEWS_H
