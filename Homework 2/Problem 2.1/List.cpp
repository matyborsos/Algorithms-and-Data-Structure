/* CH-231-A
   hm2_p1.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include <fstream>
#include <list>

using namespace std;
ofstream fout("listB.txt");


int  main()
{
    // 1. Create two lists (A and B):
    int el;
    list<int> listA;
    list<int> listB; 

    // 2. Read integers from the keyboard until the entered integer is negative or zero,
    // 3. Insert the positive integers into list A by adding to the end,
    // 4. Insert the same positive integers into list B by adding to the beginning:
    cin >> el;
    while( el > 0 ){
        listA.push_back(el);
        listB.push_front(el);
        cin >> el;
    }

    // 5. Print list A (separated by spaces) on the standard output and print list B 
    // (separated by spaces) into a file called “listB.txt”:
    cout << "List A: ";
    for (list<int>::iterator it = listA.begin(); it != listA.end(); it++) {
		if (it == listA.begin())
			cout << *it;
		else cout << " " << *it;
	}
    fout << "List B: ";
    if (fout.good() && fout.is_open()) {
		for (list<int>::iterator it = listB.begin(); it != listB.end(); it++) {
			if (it == listB.begin())
                fout << *it;
			else fout << " " << *it;
		}
	} else cout << "Error while opening file!" << endl;
	fout.close();

    // 6. Print an empty line on the standard output:
    cout << endl;

    // 7. Move the first element of the lists to the end (for both lists):
    el = *listA.begin();
    listA.push_back(el);
    listA.pop_front();
    el = *listB.begin();
    listB.push_back(el);
    listB.pop_front();

    // 8. Print list A, print list B on the standard output (both separated by comma) using an iterator.
    // Make sure that you do not print a comma after the last element:
    cout << "New List A: ";
    for (list<int>::iterator it = listA.begin(); it != listA.end(); it++) {
		if (it == listA.begin())
			cout << *it;
		else cout << "," << *it;
	}
    cout << endl << "New List B: ";
    for (list<int>::iterator it = listB.begin(); it != listB.end(); it++) {
		if (it == listB.begin())
			cout << *it;
		else cout << "," << *it;
	}

    // 9. Print an empty line on the standard output:
    cout << endl;

    // 10. Merge list B into list A:
    listA.merge(listB);
    listA.sort();

    // 11. Print the result of the merging as a sorted list on the standard output (separated by spaces):
    cout << "Merged List: ";
    for (list<int>::iterator it = listA.begin(); it != listA.end(); it++) {
		if (it == listA.begin())
			cout << *it;
		else cout << " " << *it;
	}

    return 0;
}