/* CH-231-A
   hm11_p2.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include <vector>
#include "Activity-selection.h"

using namespace std;

int main() {
	vector<Activity> list = {
		Activity(2, 7),
		Activity(5, 10),
        Activity(7, 12),
		Activity(4, 8),
	};
	
	vector<Activity> solution = greedyActivitySelector(list);

	cout << "Optimal solution set of activities:" << endl;
	for (Activity activity: solution)
		cout << activity << endl;

    return 0;
}