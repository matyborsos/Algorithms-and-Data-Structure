/* CH-231-A
   hm11_p2.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#ifndef ACTIVITY_H_
#define ACTIVITY_H_
#include <vector>
#include <iostream>

using namespace std;

class Activity {
    private:
        int start;
        int end;
    public:
        Activity(int start, int end);

        friend int findLatest(const vector<Activity> &list);
        friend ostream& operator<<(ostream &out, const Activity &a);
        friend vector<Activity> greedyActivitySelector(
            vector<Activity> list
        );
};

#endif 