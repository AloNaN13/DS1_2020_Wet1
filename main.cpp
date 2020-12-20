//
// Created by svet on 12/18/2020.
//


// MAIN FOR TESTING!!!!




#include "AvlTree.h"
#include <vector>
#include <ostream>
#include <random>
#include <chrono>
#include <algorithm>


#define addNode insert
#define removeNode remove

#include "AvlTree.h"
//#include "AVL_tests_OLD.h"
#include "CoursesManager.h"
//#include "MusicManger_sari_tests.h"

int main(){
    //MusicMangerTest();

/*

    AvlTree<int,int> check;
    check.insert(1,1);
    check.remove(1);
    check.insert(2,2);

*/






    CoursesManager manager=*new CoursesManager();
    manager.AddCourse(1,3);
    manager.AddCourse(1,4);
    manager.AddCourse(2,2);

    //manager.MMAddArtist(3,2);
    //manager.MMAddToSongCount(2,1);
    //manager.MMAddToSongCount(3,0);
    //manager.MMAddToSongCount(1,1);

    manager.WatchClass(1,0,10);
    int timeViewed = 0;
    manager.TimeViewed(1,0,&timeViewed);

    manager.RemoveCourse(1);

    int courses[2];
    int classes[2];
    manager.GetMostViewedClasses(2,courses,classes);
    for(int i = 0; i < 2; i++){
        printf("number %d: course %d, class %d.\n", i+1, courses[i], classes[i]);
    }


    printf("Here\n");

    //manager.MMAddToSongCount(2,1);
    //manager.MMAddArtist(1,5);





    printf("hello\n");


    return 0;
}



