#include "CoursesManager.h"
#include "Course.h"
#include "Views.h"
#include "MyClass.h"
#include "AvlTree.h"
#include "list.h"
#include "Node.h"

list general_list_of_views;
AvlTree<Course,int> general_courses_tree;
//add a list for sum


//helper func to link to the general list of views, not spesicif for addfunc
static void linkToListOfViews(MyClass &clas,int sum){
      if(sum==0){
          general_list_of_views.getHead()->getElementptr(clas.getIdOfCourse())->insert(clas.getIndex(),clas.getIndex());
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

//adds a course
// adds to general tree, views tree and to sum 0 in general list sums
//
//
StatusType CoursesManager::AddCourse (void *DS, int courseID, int numOfClasses){
    if((DS==nullptr)||(numOfClasses<0)){
        return INVALID_INPUT;
    }
    if(general_course_tree.getElementptr(courseID)==nullptr)
        return FAILURE;

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
StatusType CoursesManager::RemoveCourse(void *DS, int courseID){
    if((DS==nullptr)||(courseID<0)){
    return INVALID_INPUT;
    }
    if(general_course_tree.getElementptr(courseID)==nullptr){
        return FAILURE;
    }

    Course *c = general_courses_tree.getElementptr(courseID); //getting the course element
   // int len = c->getNumOfClasses();//len of arr of classes
    MyClass *clas_arr = c->getClasses(); //getting the classes arr
    int tmp_remove = 0;
    int i=0;
    while(c->getNumOfClasses()>0) {
        tmp_remove = clas_arr[i].getViews(); //getting the sum of views
        Views class_views = clas_arr[i].getListOfViews(); //getting the node of the sum from the list
        AvlTree<int,int> course_in_views_tree = class_views.getTreeOfViews()->getElementptr(courseID);//the course tree that contains classes of this sum of views
        //check if it is more then 1 class, then remove all the classes
        if(course_in_views_tree->getNumNodes()>1){
            int index_class = course_in_views_tree.getFirst();
            for (int j = 0; j < class_views.getTreeOfViews()->getNumNodes()-1; ++j) {
                c->deleteClass(index_class);
                index_class = course_in_views_tree.getNext();
        }
        class_views.getTreeOfViews()->remove(courseID); //removing the course from the tree of sums
        if (class_views.getTreeOfViews()->getNumNodes() == 0) {
            general_list_of_views.remove(class_views);
        }
        delete c->deleteClass(clas_arr[i].getIndex());
        i++;
    }
    general_courses_tree.remove(courseID);
    return SUCCESS;

}