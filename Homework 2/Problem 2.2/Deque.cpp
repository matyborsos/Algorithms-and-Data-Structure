/* CH-231-A
   hm2_p2.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include <deque>

using namespace std;


int  main()
{
    // 1. Create a deque A able to store float values:
    int el;
    deque<float> d;

    // 2. Read floats from the keyboard until the entered float value is 0,
    // 3. Insert the positive elements at the end of A and the negative elements at the beginning of A:
    cin >> el;
    while( el != 0 ){
        if( el > 0 )
            d.push_back(el);
        else
            d.push_front(el);
        cin >> el;
    }

    // 4. Print the elements of A on the standard output separated by spaces:
    cout << "Deque: ";
    for (deque<float>::iterator it = d.begin(); it != d.end(); it++) {
		if (it == d.begin())
			cout << *it;
		else cout << " " << *it;
	}

    // 5. Print an empty line on the standard output:
    cout << endl;

    // 6. Add the value 0 into the middle of the deque (between the last negative and before the first positive element):
    for (deque<float>::iterator it = d.begin(); it != d.end(); it++) {
		if ( *it > 0 ){
			d.insert(it, 0);
            break;
        }
	}

    // 7. Print the elements of A on the standard output separated by semicolons. 
    // Make sure that you do not print a semicolon after the last element:
    cout << "New Deque: ";
    for (deque<float>::iterator it = d.begin(); it != d.end(); it++) {
		if (it == d.begin())
			cout << *it;
		else cout << ";" << *it;
	}

    cout << endl;

    return 0;
}

