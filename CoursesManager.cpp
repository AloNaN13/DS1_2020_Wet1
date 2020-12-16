
#include "CoursesManager.h"
#include "Course.h"
#include "Views.h"
#include "MyClass.h"
#include "AvlTree.h"
#include "List.h"

// ERASE - Just because there is no init
List general_list_of_views = List();
AvlTree<Course,int> general_courses_tree = AvlTree<Course,int>();



//helper func to link to the general list of views, not specifically for addCourse
static void linkToListOfViews(MyClass &clas,int sum){
      if(sum==0){
          // check why getViesCoursesTree returns an int?
          //general_list_of_views.getListsFirstNode()->getViewsCoursesTree()
          //sveta's
          general_list_of_views.getListsFirstNode()->getElementptr(clas.getIdOfCourse())->insert(clas.getIndex(),clas.getIndex());
      }

  else{

      Views current_sum = general_list_of_views.getSumByIndex(clas.getViews());//general list of views->get the view obj of sum
      int current_sum_value = current_sum.getSum(); //the sum into int var
      while ((sum<current_sum_value)||(current_sum->next!=nullptr)){ //search for the next sum
          current_sum = current_sum->next;
          current_sum_value = current_sum->getData();
          }
      AvlTree<int,int> sum_value_tree; //create a tree of sum
      sum_value_tree.insert(clas.getIndex(),clas.setIdOfCourse());//insert the clas index , ordered by the course id
      general_list_of_views.emplace(sum_value_tree,current_sum->getIndex()+1);//emplace after the index we found
  }

}





StatusType CoursesManager::setTotalNumOfCourses{
    this->
    return CM_SUCCESS;
};

//adds a course
// adds to general tree, views tree and to sum 0 in general list sums
// SHOULD USE GETTERS INSTEAD OF FECTHING PRIVATE FIELDS
//
//
StatusType CoursesManager::AddCourse (void *DS, int courseID, int numOfClasses){
    if((DS==nullptr)||(numOfClasses<0)){
        return CM_INVALID_INPUT;
    }
    if(general_course_tree.getElementptr(courseID)==nullptr){
        return CM_FAILURE;
    }

    auto *class_arr = new MyClass[numOfClasses];
    for(int i=0;i<numOfClasses;i++){
///in the method of creating the class the views are set to 0 so no need to init now
        class_arr[i].setIndex(i);
        class_arr[i].setIdOfCourse(courseID);
        linkToListOfViews(class_arr[i],0);
    }
    auto *course = new Course(courseID,class_arr);
    general_courses_tree.insert(*course,course.getId());
}

// removes from tree of views, if only view then deletes the sum in general views list
// removes from general tree
// SHOULD USE GETTERS INSTEAD OF FECTHING PRIVATE FIELDS
StatusType CoursesManager::RemoveCourse(void *DS, int courseID) {
    if ((DS == nullptr) || (courseID < 0)) {
        return CM_INVALID_INPUT;
    }
    if (general_course_tree.getElementptr(courseID) == nullptr) {
        return CM_FAILURE;
    }

    Course *c = general_courses_tree.getElementptr(
            courseID); //getting the course element
    // int len = c->getNumOfClasses();//len of arr of classes
    MyClass *clas_arr = c->getClasses(); //getting the classes arr
    int tmp_remove = 0;
    int i = 0;
    while (c->getNumOfClasses() > 0) {
        tmp_remove = clas_arr[i].getViews(); //getting the sum of views
        Views class_views = clas_arr[i].getListOfViews(); //getting the node of the sum from the list
        AvlTree<int, int> course_in_views_tree = class_views.getTreeOfViews()->getElementptr(
                courseID);//the course tree that contains classes of this sum of views
        //check if it is more then 1 class, then remove all the classes
        if (course_in_views_tree->getNumNodes() > 1) {
            int index_class = course_in_views_tree.getFirst();
            for (int j = 0;
                 j < class_views.getTreeOfViews()->getNumNodes() - 1; ++j) {
                c->deleteClass(index_class);
                index_class = course_in_views_tree.getNext();
            }
            class_views.getTreeOfViews()->remove(
                    courseID); //removing the course from the tree of sums
            if (class_views.getTreeOfViews()->getNumNodes() == 0) {
                general_list_of_views.remove(class_views);
            }
            delete c->deleteClass(clas_arr[i].getIndex());
            i++;
        }
        general_courses_tree.remove(courseID);
        return CM_SUCCESS;
    }
}

// need to put "new" in front of avltree ctor?
StatusType WatchClass(void *DS, int courseID, int classID, int time){
    //TO DO
    // like addSongToCount
    try{
        if(DS == nullptr || courseID <= 0 || classID < 0 || time <= 0 ||
            classID + 1 > general_courses_tree.getElementptr(courseID)->getNumOfClasses()){
            return CM_INVALID_INPUT;
        }
        if(general_courses_tree.getElementptr(courseID) == nullptr){
            return CM_FAILURE;
        }

        // go to course
        // go its to class arr
        // go the curr views node in list
        // change the time_of_views in the class_arr
        // find the new views node in deltaT
        // create it if it doesnt exist
        // add the class to the new views_node's avltree
        // remove the class from the old views_node's avltree
        // if the only one in the second - remove node from first tree
        // if the only node in first tree - remove node from list
        // not if its the node 0
        // point the class in the class_arr to the new_node

        int old_time_of_views = general_courses_tree.getElementptr(courseID)->getClasses()[classID].getViews();
        int new_time_of_views = general_courses_tree.getElementptr(courseID)->getClasses()[classID].getViews() + time;
        general_courses_tree.getElementptr(courseID)->getClasses()[classID].setViews(new_time_of_views);

        ListNode* curr_views_node = general_courses_tree.getElementptr(courseID)->getClasses()[classID].getListOfViews();
        //remove the old
        AvlTree<AvlTree<int,int>,int>& curr_node_tree = curr_views_node->getViewsCoursesTree();
        curr_node_tree.getElementptr(courseID)->remove(classID);
        if(curr_node_tree.getElementptr(courseID)->getFirst() == nullptr){
            curr_node_tree.remove(courseID);
        }
        if(curr_node_tree.getFirst() == nullptr && curr_node_tree != general_list_of_views.getListsFirstNode()){
            ListNode* old_views_node = curr_views_node;
            curr_views_node = curr_views_node->getNextNode();
            general_list_of_views.removeListNode(old_views_node);
        }
        // add the new
        while(curr_views_node->getTimeOfViews() <= new_time_of_views){
            curr_views_node = curr_views_node->getNextNode();
        }
        if(curr_views_node->getTimeOfViews() > new_time_of_views){
            AvlTree<AvlTree<int, int> *, int> &new_node_tree = *(new AvlTree<AvlTree<int, int> *, int>()); //check if "new" and "*" is actually needed
            general_list_of_views.insertListNode(curr_views_node,new_node_tree,new_time_of_views);
            curr_views_node = new_views_node;
        }
        curr_node_tree = curr_views_node->getViewsCoursesTree();
        if(curr_node_tree.getElementptr(courseID) == nullptr){ // create a new node for the course if doesnt exist
            AvlTree<int,int> new_classes_tree_for_course; // maybe use cctor?
            curr_node_tree.insert(new_classes_tree_for_course,int);
        }
        // there should be no chance of an exact classes node (int), so we dont check it
        curr_node_tree.getElementptr(courseID)->insert(classID,classID);

        // adjust the class object - set views + pointer
        general_courses_tree.getElementptr(courseID)->getClasses()[classID].setViews(new_time_of_views);
        general_courses_tree.getElementptr(courseID)->getClasses()[classID].setListOfViews(curr_views_node);

        //sveta's initial code
        /*
        Views current_sum = general_list_of_views.getSumByIndex(clas.getViews());//general list of views->get the view obj of sum
        int current_sum_value = current_sum.getSum(); //the sum into int var
        while ((sum<current_sum_value)||(current_sum->next!=nullptr)){ //search for the next sum
            current_sum = current_sum->next;
            current_sum_value = current_sum->getData();
        }
        AvlTree<int,int> sum_value_tree; //create a tree of sum
        sum_value_tree.insert(clas.getIndex(),clas.setIdOfCourse());//insert the clas index , ordered by the course id
        general_list_of_views.emplace(sum_value_tree,current_sum->getIndex()+1);//emplace after the index we found
        */

    } catch(...){
        return CM_ALLOCATION_ERROR;
    }
}

StatusType TimeViewed(void *DS, int courseID, int classID, int *timeViewed){
    // like NumberOfStreams
    try{
        if(DS == nullptr || courseID <= 0 || classID < 0 ||
                classID > general_courses_tree.getElementptr(courseID)->getNumOfClasses()){
            return CM_INVALID_INPUT;
        }
        if(general_courses_tree.getElementptr(courseID) == nullptr){
            return FAILURE;
        }
        timeViewed = general_courses_tree.getElementptr(courseID)->getClasses() + classID;
            //check if it is ok to fetch the classes array like this
        return CM_SUCCESS;
    } catch(...){
        return CM_ALLOCATION_ERROR;
    }
}

StatusType GetMostViewedClasses(void *DS, int numOfClasses, int *courses, int *classes){
    //TO DO
    // like getRecommendedSongs
}



