/* CH-231-A
   hm11_p1.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include <iomanip>
#include "Hash-Table.h"

using namespace std;

Node::Node(int key, int value) {
	this->key = key;
	this->value = value;
}

HashTable::HashTable() {
	this->maxSize = 25;
	this->currentSize = 0;
	this->arr = new Node*[this->maxSize];
	for (int i = 0; i < this->maxSize; ++i) 
		arr[i] = NULL;
}

HashTable::~HashTable() {
	for (int i = 0; i < this->maxSize; ++i)
		if (this->arr[i] != NULL)
			delete arr[i];
}

int HashTable::hashCode(int key) {
	return (key % this->maxSize);
}

void HashTable::insertNode(int key, int value) {
	if (this->currentSize >= this->maxSize)
		cout << "Insertion is not possible as Hash Table is full!" << endl;
	else {
		Node *newEntry = new Node(key, value);
		int hashedKey = this->hashCode(key);
		if (this->arr[hashedKey] == NULL) {
			cout << "Successfully inserted into position "
					  << this->hashCode(key) << endl;
			this->arr[hashedKey] = newEntry;
		} else {
			int i = 0;
			while ((i <= this->maxSize) && 
				   (arr[(hashedKey + i) % this->maxSize] != NULL)) {
				i++;
			}
			cout << "Successfully inserted into position "
					  << (hashedKey + i) % this->maxSize << endl;
			this->arr[(hashedKey + i) % this->maxSize] = newEntry;
		}
		this->currentSize++;
	}
}

int HashTable::get(int key) {
	int hashedKey = this->hashCode(key);
	if (this->arr[hashedKey] == NULL) {
		cout << "Couldn't retrieve any element with key " << key << "!" << endl;
		return {};
	} else {
		int i = 0;
		while ((i <= this->maxSize) &&
			   (this->arr[(hashedKey + i) % this->maxSize]->key != key)) {
			i++;
		}
		if (this->arr[(hashedKey + i) % this->maxSize]->key == key) {
			cout << "Retrieved element with key " << key << " in position "
					<< (hashedKey + i)  % this->maxSize << " and value "
					<< this->arr[(hashedKey + i) % this->maxSize]->value << endl;
			return this->arr[(hashedKey + i) % this->maxSize]->value;
		} else {
			cout << "Couldn't retrieve any element with key " << key << "!" << endl;
			return {};
		}
	}
}

bool HashTable::isEmpty() {
	return !this->currentSize;
}

void HashTable::printHashTable() {
	cout << "Hash Table (m = " << this->maxSize << "):" << endl;
	for (int i = 0; i < this->maxSize; ++i) {
		if (this->arr[i] != NULL)
			cout << "Position " << std::setw(2) << i << ":\t("
					  << setw(3) << this->arr[i]->key << ", "
					  << setw(3) << this->arr[i]->value << ")" << endl;
	}
}