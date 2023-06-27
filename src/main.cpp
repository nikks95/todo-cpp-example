#include <iostream>
#include "todo.h"
#include "activity.h"
#include <string>

using namespace std;

int main(){
    string name;
    unsigned int status;
    status = NEW_ACTIVITY;
    name = "Search Job";
    Todo *to = new Todo();
    to->addNewTask(name,status);
    name = "Sleep";
    status = IN_PROGRESS;
    to->addNewTask(name,status);
    to->showTasks();
    delete to;
}