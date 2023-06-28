#ifndef TODOHEADER_F
#define TODOHEADER_F
#include "activity.h"
#include <vector>

class Todo{
    private:
        std::vector<Activity> *todolist;
    public:
        Todo(){
            todolist = new std::vector<Activity>();
        }
        void addNewTask(string name,unsigned int status);
        void showTasks();
        ~Todo(){
            delete todolist;
        }
};

#endif