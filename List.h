
#ifndef DS1_2020_WET1_LIST_H
#define DS1_2020_WET1_LIST_H

#include "AVLTree_OLD.h"

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
    const int num_of_views;
    AvlTree<AvlTree<int,int>*,int>& views_courses; // why reference?
    ListNode* prev_node;
    ListNode* next_node;
public:
    //ctor
    // change pointer and reference? create with next and prev?
    explicit ListNode(int num_of_views): num_of_views(num_of_views),
                                views_courses(*(new AvlTree<AvlTree<int,int>*,int>())),
                                prev_node(nullptr),
                                next_node(nullptr) {};
    ListNode(int num_of_views, AvlTree<AvlTree<int,int>*,int>& views_courses): num_of_views(num_of_views),
                                views_courses(views_courses),
                                prev_node(nullptr),
                                next_node(nullptr) {};

    //dtor
    ~ListNode() {delete(&views_courses)};

    //cctor + assign
    //ListNode(const ListNode& node) = default;
    //ListNode& operator=(const ListNode& node) = default;

    // setters+getters
    ListNode* getPrevNode() {return this->prev_node};
    ListNode* getNextNode() {return this->next_node};
    void setPrevNode(ListNode* new_prev_node) {this->prev_node = new_prev_node};
    void setNExtNode(ListNode* new_next_node) {this->next_node = new_prev_node};

    // other functions?
    // get num_of_views?
    // get avltree?


};

class List{
private:
    ListNode* first_node;
    ListNode* last_node;
public:
    //ctor
    //dtor

    ~List() {delete(&views_courses)};
    //cctor
    //assign

};


#endif //DS1_2020_WET1_LIST_H


public:
    StreamList(): first_node(new StreamListNode(0)), last_node(nullptr) {
        last_node = first_node;
    };
    ~StreamList();
    void deleteAllStreamNodes(StreamListNode* node);
    StreamList& operator=(const StreamList& list) = default;

    StreamListNode* GetListFirstNode() {return this->first_node;};
    StreamListNode* GetListLastNode() {return this->last_node;};

    //void SetListFirstNode(StreamListNode* node) {this->first_node = node;}; // void?
    //void SetListLastNode(StreamListNode* node) {this->last_node = node;}; // void?
    //AvlTree<AvlTree<int,int>*,int>& getAvlTreeFromNode(StreamListNode& node) {return node.getNodeAvlTree();};

    //StreamListNode* getNodePrev(StreamListNode* node) { return node->getPrevNode();};
    //StreamListNode* getNodeNext(StreamListNode* node) { return node->getNextNode();};

    StreamListResult insertNode(StreamListNode* curr_node, AvlTree<AvlTree<int,int>*,int>& stream_artists, int num_of_streams);
    StreamListResult removeNode(StreamListNode* node);

};
