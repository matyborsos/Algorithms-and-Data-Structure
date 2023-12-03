/* CH-231-A
   hm1_p3.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
	List<int> ilist;
    ilist.push_front(14);
    ilist.push_front(11);
    ilist.push_back(12);
	ilist.push_back(15);

    cout << "The List has " << ilist.elementNumber() << " elements." << endl
		 << "Element in the front is: " << ilist.front() << endl
		 << "Element in the back is: " << ilist.back() << endl;

    ilist.push_front(1);
    ilist.push_back(13);

    cout << "The new element in the front is: " << ilist.front() << endl
		 << "The new element in the back is: " << ilist.back() << endl;

    cout << "Popping 1 element from the front: " << ilist.pop_front() << endl
		 << "Popping 1 element from the back: "  << ilist.pop_back() << endl;

	cout << "The element in the front is: " << ilist.front() << endl
		 << "The element in the back is: " << ilist.back() << endl
		 << "List has " << ilist.elementNumber() << " elements left." << endl;

	// Empty List by popping every element and test pop when List is empty
	for (int i = 0; i < 5; i++)
		ilist.pop_back();

	return 0;
}