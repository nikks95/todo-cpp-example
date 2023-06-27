#ifndef ACTIVITYHEADER_F
#define ACTIVITYHEADER_F
#include <string>
#include <algorithm>
using namespace std;
enum activity_status  {NEW_ACTIVITY=0,IN_PROGRESS,DONE};
struct activity_set
{
    string status;
    unsigned int val;
};

activity_set set[3]={
    {"NEW",NEW_ACTIVITY},
    {"In Progress", IN_PROGRESS},
    {"Completed", DONE}
};
string getStatusName(unsigned int s){
    for(int i =0; i<(int)sizeof(set)/(int)sizeof(activity_set);i++){
        if(set[i].val==s){
            return set[i].status;
        }
    }
    return "";
}
class Activity{
    private:
        string name;
        unsigned int status;        
    public:
        Activity(string name, unsigned int status): name(name),status(status){};
        string getName(){
            return name;
        }
        void setName(string name){
            this->name = name;
        }
        unsigned int getStatus(){
            return this->status;
        }
        void setStatus(unsigned int status){
            this->status = status;
        }

        string fetchActivityDetails(){
            return "Activity: "+this->name+" "+" Status: "+getStatusName(this->status);
        }

};

#endif