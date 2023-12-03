/*
	CH-231-A
	hw9_p1b.cpp
	Matheas-Roland Borsos
	m.borsos@constructor.university
*/

#include <iostream>
#include "Stack.h"

using namespace std;

template <typename T> 
class Queue {
	private :
	Stack <T> firstStack, secondStack ; 
	public:
	void Enqueue (T x); 
	T Dequeue ();
};

template <typename T>
void Queue <T>::Enqueue(T x) {
	this -> firstStack.push(x);
}

template <typename T>
T Queue <T>::Dequeue() {
	if(( this -> firstStack.isEmpty()) && ( this -> secondStack.isEmpty())) {
		cout <<"Queue is empty!"<< endl;
		return {};
	}
	if( this -> secondStack.isEmpty()) {
		while(! this -> firstStack.isEmpty()) {
			T transfer = this -> firstStack.pop(); 
			this -> secondStack.push(transfer);
		}
	    cout << endl;
    }  
    T dequeued = this->secondStack.pop(); 
    cout << "Dequeued element" << dequeued <<  "from the queue." << endl;
	return dequeued;
}

int main() {
	
    Queue<int> queue;

    for (int i = 1; i < 6; i++) {
        cout << "Enqueued element " << i << " onto the queue." << endl;
        queue.Enqueue(i);
        cout << endl;
    }    

    for (int i = 1; i < 6; i++) {
        queue.Dequeue();
        cout << endl;
    }

    cout << "Dequeued 5 elements from the queue!" << endl;

    // Test dequeueing when queue is empty
    cout << endl << "Trying to dequeue when queue is empty:" << endl;
    queue.Dequeue();
    
    return 0;
}

