/* CH-231-A
   hm11_p1.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include "Hash-Table.h"

using namespace std;

int main() {
	HashTable hashTable;

	hashTable.insertNode(0, 47);
	hashTable.insertNode(14, 91);
	hashTable.insertNode(15, 92);
	hashTable.insertNode(4, 25);
	hashTable.insertNode(28, 19);
	hashTable.insertNode(29, 24);
	hashTable.insertNode(24, 11);
	// Insert a node with key 49 (hashedKey = 49 % 25 = 4)
	// Linear probing is applied to this to place element in position 1
	// by wrapping around back to position 0 and probing from there
	hashTable.insertNode(49, 25);

	cout << endl;
	hashTable.printHashTable();
	cout << endl;

	// Test get functionality
	hashTable.get(4);
	hashTable.get(29);
	hashTable.get(49);
	hashTable.get(24);
	hashTable.get(33);

    return 0;
}