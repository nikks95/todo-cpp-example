#include "activity.h"
activity_set set[3]={
    {"NEW",NEW_ACTIVITY},
    {"In Progress", IN_PROGRESS},
    {"Completed", DONE}
};
string Activity::getName()
{
    return name;
}
void Activity::setName(string name)
{
    this->name = name;
}
unsigned int Activity::getStatus()
{
    return this->status;
}
void Activity::setStatus(unsigned int status)
{
    this->status = status;
}

string Activity::fetchActivityDetails()
{
    return "Activity: " + this->name + " " + " Status: " + getStatusName(this->status);
}
string getStatusName(unsigned int s){
    for(int i =0; i<(int)sizeof(set)/(int)sizeof(activity_set);i++){
        if(set[i].val==s){
            return set[i].status;
        }
    }
    return "";
}