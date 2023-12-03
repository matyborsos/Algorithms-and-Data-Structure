/* CH-231-A
   hm2_p4.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int  main()
{
    int i;
    vector<int> vint;

    for( i = 1; i <= 30; i++)
        vint.push_back(i);

    vint.push_back(5);

    reverse(vint.begin(), vint.end());

    cout << "Reversed vector: ";
    for (vector<int>::iterator it = vint.begin(); it != vint.end(); it++) {
		if (it == vint.begin())
			cout << *it;
		else cout << " " << *it;
	}

    cout << endl;

    replace(vint.begin(), vint.end(), 5, 129);

    cout << "Modified vector: ";
    for (vector<int>::iterator it = vint.begin(); it != vint.end(); it++) {
		if (it == vint.begin())
			cout << *it;
		else cout << " " << *it;
	}

    cout << endl;
}