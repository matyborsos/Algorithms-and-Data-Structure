/* CH-231-A
   hm1_p2.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
using namespace std;

template <class T, int initialSize = 10>
class Stack {
	private:
		T* ptra;
		int size;
		int lastel;
	public:
		// this constructor sets the stack’s size to the given size
		Stack(int size);
		// this constructor initializes the stack to a size of 10
		Stack();
		// copy constructor, create a real copy of the stack
		Stack(const Stack&);
		// destructor
		~Stack();

		// adds an element onto the Stack
		bool push(T element);
		// pops an element out of the Stack
		bool pop(T& out);

		// gets the last element added to the Stack
		T back(void);
		// gets the number of elements in the Stack
		int getNumEntries();
};

template <class T, int initialSize>
Stack<T, initialSize>::Stack(int size) {
    (*this).ptra = new T[size];
	(*this).size = size;
	(*this).lastel = -1;
}

template <class T, int initialSize>
Stack<T, initialSize>::Stack() {
    (*this).ptra = new T[initialSize];
	(*this).size = initialSize;
	(*this).lastel = -1;
}

template <class T, int initialSize>
Stack<T, initialSize>::Stack(const Stack& el) {
    (*this).ptra = new T[el.size];
	(*this).size = el.size;
	(*this).lastel = el.lastel;
    for (int i = 0; i < size; i++)
		(*this).ptra[i] = el.ptra[i];
}

template <class T, int initialSize>
Stack<T, initialSize>::~Stack() {
	delete [] ptra;
}

template <class T, int initialSize>
bool Stack<T, initialSize>::push(T element) {
	if((*this).lastel == (*this).size - 1)
        return false;
    else
     {
        (*this).ptra[(*this).lastel + 1] = element;
        (*this).lastel++;
        return true;
     }
}

template <class T, int initialSize>
bool Stack<T, initialSize>::pop(T& out) {
	if((*this).lastel == -1)
        return false;
    else
     {
        out = (*this).ptra[(*this).lastel];
        (*this).lastel--;
        return true;
     }
}

template <class T, int initialSize>
T Stack<T, initialSize>::back(void) {
	if ((*this).lastel == -1)
		exit(1);
	return (*this).ptra[(*this).lastel];
}

template <class T, int initialSize>
int Stack<T, initialSize>::getNumEntries() {
	return (*this).lastel + 1;
}