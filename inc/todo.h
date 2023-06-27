#ifndef TODOHEADER_F
#define TODOHEADER_F
#include "activity.h"
#include <vector>
#include <iterator>
#include <iostream>
class Todo{
    private:
        std::vector<Activity> *todolist;
    public:
        Todo(){
            todolist = new std::vector<Activity>();
        }
        void addNewTask(string name,unsigned int status){
            Activity act(name,status);
            todolist->push_back(act);
        }
        void showTasks(){
            for(std::vector<Activity>::iterator it=todolist->begin(); it!=todolist->end() ; it++){
                std::cout<<it->fetchActivityDetails()<<std::endl;
            }
        }
        ~Todo(){
            delete todolist;
        }


};

#endif