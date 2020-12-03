//
// Created by svet on 12/3/2020.
//

#include "Views.h"
using std::cout;

Views::Views(int sum,AvlTree<MyClass, int> *t):_sum(sum),_tree(t) {

    if (sum < 0) {
        cout << INVALID_INPUT;
    }
    if ((_sum != sum) || (_tree == nullptr)) {
        cout << ALLOCATION_ERROR;
    }
}
int Views::getSum() {
    return _sum;
}
AvlTree<MyClass,int>* Views::getTreeOfViews() {
    return this->_tree;
}
void Views::setSum(int i) {
    _sum=i;
}
void Views::setTreeOfViews(AvlTree<MyClass,int> *t) {
    _tree = t;
}
