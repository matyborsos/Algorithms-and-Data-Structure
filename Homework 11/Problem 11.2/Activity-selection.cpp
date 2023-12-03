/* CH-231-A
   hm11_p2.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include <vector>
#include "Activity-selection.h"

using namespace std;

Activity::Activity(int start, int end) {
	this->start = start;
	this->end = end;
}

int findLatest(const std::vector<Activity> &list) {
	int position = 0;
	Activity latestStartingActivity = list[0];
	for (int i = 0; i < (int) list.size(); ++i)
		if (list[i].start > latestStartingActivity.start) {
			latestStartingActivity = list[i];
			position = i;
		}
	return position;
}

ostream& operator<<(ostream &out, const Activity &a) {
	out << "(" << a.start << "," << a.end << ")";
	return out;
}

vector<Activity> greedyActivitySelector(vector<Activity> list) {
	vector<Activity> optimalSelection;
	vector<Activity> activitiesLeft = list;
	int latestActivityPosition = findLatest(list);
	activitiesLeft.erase(activitiesLeft.begin() + latestActivityPosition);
	optimalSelection.push_back(list[latestActivityPosition]);
	
	while ((int) activitiesLeft.size() != 0) {
		latestActivityPosition = findLatest(activitiesLeft);
		Activity latest = activitiesLeft[latestActivityPosition];
		activitiesLeft.erase(activitiesLeft.begin() + latestActivityPosition);
		if (latest.end <= optimalSelection[optimalSelection.size() - 1].start)
			optimalSelection.push_back(latest);
	}

	return optimalSelection;
}