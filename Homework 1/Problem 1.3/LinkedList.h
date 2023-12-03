/* CH-231-A
   hm1_p3.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
using namespace std;

template <class T>
class Node { 
    public:
        T data;
        Node *previous = NULL;
        Node *next     = NULL;
        Node(T newdata);
};

template <class T>
class List {
    private:
        int size;
        Node<T> *Front;
        Node<T> *Back;
    public:
        // Constructor with no parameters
        List();
        // Destructor
        ~List();

        void push_back(T element);
        void push_front(T element);
        T pop_back();
        T pop_front();
        T front();
        T back();
        int elementNumber();
};

template <class T>
List<T>::List() {
    (*this).Front = NULL;
    (*this).Back  = NULL;
    (*this).size  = 0;
}

template <class T>
List<T>::~List() {
    // checks if list is empty
    if ((*this).Front != NULL) {
        Node<T> *cursor = (*this).Front;
        Node<T> *temp;
        // Delete each element from the list while going through the list
        while (cursor != NULL) {
            temp = cursor;
            cursor = cursor->next;
            delete temp;
        }
    }
}

template <class T>
void List<T>::push_back(T element) {
    Node<T> *newElement = new Node<T>(element);
    newElement->previous = (*this).Back;
    newElement->next = NULL;

    if ((*this).size == 0)
        // assigns newElement as the front of the List
        (*this).Front = newElement;
    else
        // adds the element at the end of the List
        (*this).Back->next = newElement;

    // sets newElement as the back of the List
    (*this).Back = newElement;
    (*this).size++;
}

template <class T>
void List<T>::push_front(T element) {
    Node<T> *newElement = new Node<T>(element);
    newElement->previous = NULL;
    newElement->next = (*this).Front;

    if ((*this).size == 0)
        // assigns new Element as the back of the List
        (*this).Back = newElement;
    else
        // adds the element at the front of the List
        (*this).Front->previous = newElement;

    // sets newElement as the front of the List
    (*this).Front = newElement;
    (*this).size++;
}

template <class T>
T List<T>::pop_back() {
    Node<T> *temp = NULL;

    if ((*this).size > 0) {
        // saves the data of the element in the back and delete it
        T data;
        data = (*this).Back->data;
        temp = (*this).Back;
        (*this).Back = (*this).Back->previous;
        (*this).size--;
        delete temp;
        return data;
    } else {
        cout << "Unable to pop, List is empty!" << endl;
        exit(1);
    }
}

template <class T>
T List<T>::pop_front() {
    Node<T> *temp = NULL;

    if ((*this).size > 0) {
        // saves the data of the element in the front and delete it
        T data;
        data = (*this).Front->data;
        temp = (*this).Front;
        (*this).Front = (*this).Front->next;
        (*this).size--;
        delete temp;
        return data;
    } else {
        cout << "Unable to pop, List is empty!" << endl;
        exit(1);
    }
}

template <class T>
int List<T>::elementNumber() {
    return (*this).size;
}

template <class T>
T List<T>::front() {
    return (*this).Front->data;
}

template <class T>
T List<T>::back(){
    return (*this).Back->data;
}

template <class T>
Node<T>::Node(T newdata) {
    (*this).data = newdata;
}