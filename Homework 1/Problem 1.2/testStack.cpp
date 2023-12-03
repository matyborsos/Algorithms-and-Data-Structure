/* CH-231-A
   hm1_p2.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
using namespace std;
#include "stack.h"

int main() {
    // creates integer stack with initialSize
    Stack<int> istack;
    // creates double stack with size 30
	Stack<double, 30> dstack;

    int ipop;
    double dpop;

	for (int i = 0; i < 10; i++)
		istack.push(i * i);
    
    for (int i = 0; i < 30; i++)
        dstack.push(i + 2.345);

    cout << "If stack is full,  push returns: " 
         << istack.push(100) << endl;

    // uses copy constructor on integer stack
    Stack<int> istackcopy(istack);

    // pops each element of the copy constructed stack
    for (int i = 0; i < 10; i++)
        istackcopy.pop(ipop);
    
    cout << "If stack is empty,  pop returns: " 
         << istackcopy.pop(ipop) << endl;
    
    cout << "Element on the back of the integer stack is: "
         << istack.back() << endl;

    // popping one element from integer and double stack 
    // to see the changes
    istack.pop(ipop);
    dstack.pop(dpop);
    cout << "Element popped from integer stack is: " << ipop << endl
         << "Element popped from double stack is: "  << dpop << endl;

    cout << "Number of elements in integer stacks is: "
         << istack.getNumEntries() << endl
         << "Number of elements in double stack is: "
         << dstack.getNumEntries() << endl;

    return 0;
}