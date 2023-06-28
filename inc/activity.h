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
string getStatusName(unsigned int s);
class Activity{
    private:
        string name;
        unsigned int status;        
    public:
        Activity(string name, unsigned int status): name(name),status(status){};
        string getName();
        void setName(string name);
        unsigned int getStatus();
        void setStatus(unsigned int status);

        string fetchActivityDetails();

};

#endif