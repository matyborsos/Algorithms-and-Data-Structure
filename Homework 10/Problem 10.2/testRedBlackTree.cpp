/* CH-231-A
   hm10_p2.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include "RedBlackTree.h"

using namespace std;

int main() {
    RedBlackTree rbt;
    int inElements[6] = {13, 44, 37, 7, 22, 16};

    // Test inserting and eleting values into and from the Red Black Tree
    for (int element : inElements) {
        cout << "Inserting element with value " << element << endl;
        rbt.insertRB(element);
    }

    cout << "State of the Red Black Tree (inorder):" << endl;
    rbt.inOrder();
    cout << endl;

    int outElements[3] = {44, 21, 16};
    for (int element : outElements) {
        cout << "Deleting element with value " << element << endl;
        rbt.deleteRB(element);
    }
    cout << "State of the Red Black Tree (inorder):" << endl;
    rbt.inOrder();
    cout << endl;

    return 0;
}