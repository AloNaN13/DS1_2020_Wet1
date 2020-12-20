
#include "CoursesManager.h"
#include "Course.h"
#include "Views.h"
#include "MyClass.h"
#include "AvlTree.h"
#include "List.h"

// ERASE - Just because there is no init
//List general_list_of_views = List();
//AvlTree<Course,int> _general_courses_tree = AvlTree<Course,int>();


/*
//adds a course
// adds to general tree, views tree and to sum 0 in general list sums
// SHOULD USE GETTERS INSTEAD OF FECTHING PRIVATE FIELDS
 */
CMResult CoursesManager::AddCourse(int courseID, int numOfClasses){
    try{
        if(courseID <= 0 || numOfClasses <= 0){
            return CM_INVALID_INPUT;
        }
        if(_general_courses_tree.getElementptr(courseID) != nullptr){
            return CM_FAILURE;
        }

        // create course and insert it to the general courses tree
        Course* course_to_add = new Course(courseID, numOfClasses);
        _general_courses_tree.insert(*course_to_add, courseID);
        // all classes will now point to 0 views in views_list
        for(int i = 0; i < numOfClasses; i++){
            _general_courses_tree.getElementptr(courseID)->getClasses()[i].setListOfViews(general_views_list.getListsFirstNode());
        }
        // create the classes tree (inside courses node in the views courses tree)
        int classes_arr_by_index[numOfClasses]/* = new int[numOfClasses]*/;
        for(int i = 0; i < numOfClasses; i++){
            classes_arr_by_index[i] = i;
        }
        AvlTree<int,int> classes_tree_from_arr(classes_arr_by_index, classes_arr_by_index, numOfClasses);
        general_views_list.getListsFirstNode()->getViewsCoursesTree().insert(classes_tree_from_arr, courseID);
        // delete[] classes_arr_by_index;
        // update the num of courses for the Courses Manager
        num_of_classes = num_of_classes + numOfClasses;

        return CM_SUCCESS;
    } catch(...){
        return CM_ALLOCATION_ERROR;
    }
}

// removes from tree of views, if only view then deletes the sum in general views list
// removes from general tree
CMResult CoursesManager::RemoveCourse(int courseID) {
    try{
        if (courseID <= 0){
            return CM_INVALID_INPUT;
        }
        if (_general_courses_tree.getElementptr(courseID) == nullptr){
            return CM_FAILURE;
        }

        // get the course to remove
        Course* course_to_remove = _general_courses_tree.getElementptr(courseID);

        for(int i = 0; i < course_to_remove->getNumOfClasses(); i++) {
            //get the relevant node in the views list
            ListNode* list_node_to_remove_from = course_to_remove->getClasses()[i].getListOfViews();
            //get the tree that represents the course's classes with this num of views
            AvlTree<int,int>* views_course_tree_to_remove = list_node_to_remove_from->getViewsCoursesTree().getElementptr(courseID);
            //remove all of the nodes in that tree - all of the courses classes with the num of views
            if(views_course_tree_to_remove == nullptr){
                continue;
            }
            int* class_to_remove = views_course_tree_to_remove->getFirst();
            while(views_course_tree_to_remove->getNumNodes() > 0){
                int* next_node_to_remove = views_course_tree_to_remove->getNext();
                views_course_tree_to_remove->remove(*class_to_remove);
                class_to_remove = next_node_to_remove;
            }
            //remove the courses node in the from the tree
            list_node_to_remove_from->getViewsCoursesTree().remove(courseID);
            //check if there are no more courses under the views list node - if so, remove the node as long as it's not 0
            if(list_node_to_remove_from->getViewsCoursesTree().getNumNodes() == 0 &&
               (list_node_to_remove_from != general_views_list.getListsFirstNode())) {
                general_views_list.removeListNode(list_node_to_remove_from);
            }

            //delete the class from the courses array
            //course_to_remove->deleteClass(course_to_remove->getClasses()[i].getIndex());
        }
        // update the num of courses for the Courses Manager
        num_of_classes = num_of_classes - _general_courses_tree.getElementptr(courseID)->getNumOfClasses();

        //remove the course from the general tree
        _general_courses_tree.remove(courseID);

        return CM_SUCCESS;
    } catch(...){
        return CM_ALLOCATION_ERROR;
    }

// Sveta's Old Code
/*
    Course *c = _general_courses_tree.getElementptr(courseID); //getting the course element
    int num_of_classes = c->getNumOfClasses();
    MyClass *clas_arr(c->getClasses()); //getting the classes arr
    int tmp_remove = 0;
    int i = 0;
    while (c->getNumOfClasses() > 0) {
        tmp_remove = clas_arr[i].getViews(); //getting the sum of views
        ListNode* class_views = clas_arr[i].getListOfViews(); //getting the node of the sum from the list
        AvlTree<int, int> *course_in_views_tree = class_views->getViewsCoursesTree().getElementptr(courseID);//the course tree that contains classes of this sum of views
        //check if it is more then 1 class, then remove all the classes
        if (course_in_views_tree->getNumNodes() > 1) {
         //   AvlTree<int,int> curr_clas = course_in_views_tree->getFirst();
            int *index_class = course_in_views_tree->getFirst();
            while(index_class!=NULL){
                c->deleteClass(*index_class);
                index_class = course_in_views_tree->getNext();
            }
            class_views->getViewsCoursesTree().remove(courseID); //removing the course from the tree of sums
            if (class_views->getViewsCoursesTree().getNumNodes() == 0) {
                general_views_list.removeListNode(class_views);
            }
            c->deleteClass(clas_arr[i].getIndex());
            i++;
        }
        _general_courses_tree.remove(courseID);
        return CM_SUCCESS;
    }
*/

}

// need to put "new" in front of avltree ctor?
CMResult CoursesManager::WatchClass(int courseID, int classID, int time){
    try{
        if(courseID <= 0 || classID < 0 || time <= 0){
            return CM_INVALID_INPUT;
        }
        if(_general_courses_tree.getElementptr(courseID) == nullptr){
            return CM_FAILURE;
        }
        if(classID /*+ 1 */> _general_courses_tree.getElementptr(courseID)->getNumOfClasses()){
            return CM_INVALID_INPUT;
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

        int old_time_of_views = _general_courses_tree.getElementptr(courseID)->getClasses()[classID].getViews();
        int new_time_of_views = old_time_of_views + time;
        _general_courses_tree.getElementptr(courseID)->getClasses()[classID].setViews(new_time_of_views);

        ListNode* curr_views_node = _general_courses_tree.getElementptr(courseID)->getClasses()[classID].getListOfViews();

        //remove the old time for class from the relevant course node in views_courses tree
        AvlTree<AvlTree<int,int>,int>* curr_node_tree = &(curr_views_node->getViewsCoursesTree());
        curr_node_tree->getElementptr(courseID)->remove(classID);
        if(curr_node_tree->getElementptr(courseID)->getFirst() == nullptr){
            curr_node_tree->remove(courseID);
        }
        if(curr_node_tree->getFirst() == nullptr && (curr_views_node != general_views_list.getListsFirstNode())){
            ListNode* old_views_node = curr_views_node;
            curr_views_node = curr_views_node->getNextNode();
            general_views_list.removeListNode(old_views_node);
        }

        // add the new time for class in the relevant course node in views_courses tree
        while((curr_views_node != general_views_list.getListsLastNode()) &&
        (curr_views_node->getNextNode()->getTimeOfViews() <= new_time_of_views)){
            curr_views_node = curr_views_node->getNextNode();
        }
        if(curr_views_node->getTimeOfViews() < new_time_of_views){
            AvlTree<AvlTree<int, int>, int>* new_node_tree = new AvlTree<AvlTree<int, int>, int>(); //check if "new" and "*" is actually needed
            //ListNode* list_node_to_insert = new ListNode(new_time_of_views,*new_node_tree);
            general_views_list.insertListNode(curr_views_node,*new_node_tree,new_time_of_views);
            curr_views_node = curr_views_node->getNextNode();
        }
        curr_node_tree = &(curr_views_node->getViewsCoursesTree());
        if(curr_node_tree->getElementptr(courseID) == nullptr){ // create a new node for the course if doesnt exist
            AvlTree<int,int> new_classes_tree_for_course = *(new AvlTree<int,int>); // maybe use cctor?
            curr_node_tree->insert(new_classes_tree_for_course,courseID);
        }
        // there should be no chance of an exact classes node (int), so we dont check it
        curr_node_tree->getElementptr(courseID)->insert(classID,classID);

        // adjust the class object - set views + pointer
        _general_courses_tree.getElementptr(courseID)->getClasses()[classID].setViews(new_time_of_views);
        _general_courses_tree.getElementptr(courseID)->getClasses()[classID].setListOfViews(curr_views_node);

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
    return CM_SUCCESS;
}

CMResult CoursesManager::TimeViewed(int courseID, int classID, int *timeViewed){
    try{
        if(courseID <= 0 || classID < 0){
            return CM_INVALID_INPUT;
        }
        if(_general_courses_tree.getElementptr(courseID) == nullptr){
            return CM_FAILURE;
        }
        if(classID > _general_courses_tree.getElementptr(courseID)->getNumOfClasses()){
            return CM_INVALID_INPUT;
        }

        *timeViewed = _general_courses_tree.getElementptr(courseID)->getClasses()[classID].getViews();
            //check if it is ok to fetch the classes array like this
        return CM_SUCCESS;
    } catch(...){
        return CM_ALLOCATION_ERROR;
    }
}

CMResult CoursesManager::GetMostViewedClasses(int numOfClasses, int *courses, int *classes){
    try{
        if(numOfClasses <= 0){
            return CM_INVALID_INPUT;
        }
        if(num_of_classes < numOfClasses){
            return CM_FAILURE;
        }

        // get the last node of list
        // run with a loop until reaches numOfClasses
            // get first course
                // get first song
                // up the counter by 1 and get the next song
                // if last song, go to next course
            // if last course, go to prev node in list

        int counter = 0;
        ListNode* curr_views_node = general_views_list.getListsLastNode();
        AvlTree<int,int>* curr_course;
        int* curr_class;
        int curr_course_id = 0;

        while(counter < numOfClasses){
            curr_course = curr_views_node->getViewsCoursesTree().getFirst();
            while((counter < numOfClasses)  & (curr_course != nullptr)){
                curr_course_id = curr_views_node->getViewsCoursesTree().getKey();
                curr_class = curr_views_node->getViewsCoursesTree().getElementptr(curr_course_id)->getFirst();
                while((counter < numOfClasses) && (curr_class != nullptr)){
                    courses[counter] = curr_course_id;
                    classes[counter] = *curr_class;
                    counter++;
                    curr_class = curr_course->getNext();
                }
                // am i doing it correctly?
                curr_course = curr_views_node->getViewsCoursesTree().getNext();
            }
            curr_views_node = curr_views_node->getPrevNode();
        }
        return CM_SUCCESS;
    } catch(...){
        return CM_ALLOCATION_ERROR;
    }
}

/* WHAT WAS THIS FOR?
AvlTree<Course,int>* CoursesManager::getGeneralCoursesTree(){
    AvlTree<Course,int>* p = &_general_courses_tree;//is it ok????
    return p;
}
*/











/*
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
*/



