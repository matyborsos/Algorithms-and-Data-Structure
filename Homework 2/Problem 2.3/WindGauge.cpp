/* CH-231-A
   hm2_p3.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include <climits>
#include "WindGauge.h"

using namespace std;

WindGauge::WindGauge(int period) {
	(*this).period = period;
}

void WindGauge::currentWindSpeed(int speed) {
	if ((int) (*this).history.size() == (*this).period)
		(*this).history.pop_back();
	// places new value of wind speed into container
	(*this).history.push_front(speed);
}

int WindGauge::highest() const {
	int max = INT_MIN;
	// finds maximum wind speed value 
	for (deque<int>::const_iterator it = (*this).history.begin(); it != (*this).history.end(); it++)
		if (*it > max)
			max = *it;
	return max;
}

int WindGauge::lowest() const {
	int min = INT_MAX;
	// finds minimum wind speed value 
	for (deque<int>::const_iterator it = (*this).history.begin(); it != (*this).history.end(); it++)
		if (*it < min)
			min = *it;
	return min;
}

int WindGauge::average() const {
	int average = 0;
	// finds average wind speed value 
	for (deque<int>::const_iterator it = (*this).history.begin(); it != (*this).history.end(); it++)
		average += *it;
	return (average / (*this).history.size());
}

void WindGauge::dump() const {
	// Dump lowest, highest, and average wind speed into stdout
	cout << "Lowest wind speed: "  << (*this).lowest()  << endl
	     << "Highest wind speed: " << (*this).highest() << endl
		 << "Average wind speed: " << (*this).average() << endl;
}