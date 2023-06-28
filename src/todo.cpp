#include <vector>
#include <iterator>
#include <iostream>
#include "todo.h"

void Todo::addNewTask(string name,unsigned int status){
            Activity act(name,status);
            todolist->push_back(act);
}
void Todo::showTasks(){
            for(std::vector<Activity>::iterator it=todolist->begin(); it!=todolist->end() ; it++){
                std::cout<<it->fetchActivityDetails()<<std::endl;
            }
}