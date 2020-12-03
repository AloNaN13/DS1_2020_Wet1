#include "CoursesManager.h"
#include "Course.h"
#include "MyClass.h"
#include "AvlTree.h"
#include "list.h"
#include "Node.h"

list general_list_of_views;
AvlTree<Course,int> general_courses_tree;
//add a list for sum


//helper func to link to the general list of views
// search for sum in general list of sums, if there is links if not creates new node for sum and links clas
//
//
static void linkToListOfViews(MyClass &clas,int sum){
  int is_in_list = general_list_of_views.find(sum);
  if(is_in_list<=0){
      if(sum==0){
          AvlTree<MyClass,int> zero;
          zero.insert(clas,clas.getIndex());
          general_list_of_views.emplace(general_list_of_views.begin(),1,zero);
      }
  }
  else{
      //int delta_t = clas.getViews() - sum;
      int index = general_list_of_views.getindexof(clas.getViews());
      int result = general_list_of_views.find(sum);
      if(result==1){
          general_list_of_views.getSumTree().insert(clas,clas.getIndex());
      }
      else{
         // AvlTree<MyClass,int> curret_sum=general_list_of_views.getSumByIndex(clas.getViews();
         Node current_sum = general_list_of_views.getSumByIndex(clas.getViews());
         int current_sum_value = current_sum->getData();
          while ((sum<=current_sum_value)||(current_sum->next!=nullptr)){
              current_sum = current_sum->next;
              current_sum_value = current_sum->getData();
          }
          AvlTree<MyClass,int> sum_value_tree;
          sum_value_tree.insert(clas,clas.getViews());
          general_list_of_views.emplace(sum_value_tree,current_sum->getIndex());
      }
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

    Course *c = general_courses_tree.getElementptr(courseID);
    int len = c->getNumOfClasses();
    MyClass *clas_arr = c->getClasses();
    int tmp_remove = 0;
    for(int i=0;i<len;i++){
        tmp_remove = clas_arr[i].getViews();
        general_list_of_views.getTreeByIndex(tmp_remove).remove(&clas_arr[i],clas_arr[i].getIndex());
        if (general_list_of_views.getTreeByIndex(tmp_remove).getNumNodes() == 0){
            general_list_of_views.remove(tmp_remove);
        }
    }
    general_course_tree.remove(general_course_tree.getElementptr(courseID)->getId());
    return SUCCESS;
}