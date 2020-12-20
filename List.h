
#ifndef DS1_2020_WET1_LIST_H
#define DS1_2020_WET1_LIST_H

#include "AVLTree.h"

typedef enum ListResult_t{
    LIST_SUCCESS,
    LIST_ALLOCATION_ERROR,
    LIST_ALREADY_EXISTS,
    LIST_DOESNT_EXISTS
}ListResult;


// make generic?
// List implemented as if the node is created outside of the list - change that?
// use iterator in List?

class ListNode{
private:
    const int time_of_views;
    AvlTree<AvlTree<int,int>,int>& views_courses; // reference? should be <int,int>*?
    ListNode* prev_node;
    ListNode* next_node;
public:
    //ctor
    // change pointer and reference? create with next and prev?
    explicit ListNode(int time_of_views): time_of_views(time_of_views),
                                views_courses(*(new AvlTree<AvlTree<int,int>,int>())),
                                prev_node(nullptr),
                                next_node(nullptr) {};
    ListNode(int time_of_views, AvlTree<AvlTree<int,int>,int>& views_courses): time_of_views(time_of_views),
                                views_courses(views_courses),
                                prev_node(nullptr),
                                next_node(nullptr) {};

    //dtor
    ~ListNode() {delete(&views_courses);};

    //cctor + assign
    //ListNode(const ListNode& node) = default;
    //ListNode& operator=(const ListNode& node) = default;

    // setters+getters
    ListNode* getPrevNode() {return this->prev_node;};
    ListNode* getNextNode() {return this->next_node;};
    void setPrevNode(ListNode* new_prev_node) {this->prev_node = new_prev_node;};
    void setNextNode(ListNode* new_next_node) {this->next_node = new_next_node;};

    // other functions
    AvlTree<AvlTree<int,int>,int>& getViewsCoursesTree() {return this->views_courses;};
    int getTimeOfViews() {return this->time_of_views;};

};

class List{
private:
    ListNode* first_node;
    ListNode* last_node;
public:
    //ctor
    List(): first_node(new ListNode(0)),
            last_node(nullptr) {
        last_node = first_node;
    }

    //dtor - implemented in cpp
    ~List();

    static void deleteListsNodes(ListNode* node);

    //cctor + assign
    List(const List& list) = default;
    List& operator=(const List& list) = default;

    // getters
    ListNode* getListsFirstNode() {return this->first_node;};
    ListNode* getListsLastNode() {return this->last_node;};
    // any need for setters?

    // other functions
    ListResult insertListNode(ListNode* curr_node, AvlTree<AvlTree<int,int>,int>& views_courses, int time_of_views);
    ListResult removeListNode(ListNode* node);

};


#endif //DS1_2020_WET1_LIST_H