/* CH-231-A
   hm1_p1.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include "Complex.h"
using namespace std;

const int size = 10;


template <class T> 
int array_search(T array[], int size, T searched){
    int i;
    for( i = 0; i < size; i++ )
        if( array[i] == searched )
            return i;
    return -1;
}

int main(){

    int i = 7;
    int aint[10] = {1,2,3,4,5,6,7,8,9,9};

    string s = "car";
    string astring[3] = { "tree", "mouse", "car" };

    double d = 3.9;
    double adouble[5] = { 3.2, 4.5, 7.8, 1.2, 4.4 };


    Complex c(2,-1);
	Complex c1(4,-1), c2(0,2), c3(-4,-7), c4(1,5);
    Complex aComplex[4]={c1, c2, c3, c4};

    cout << array_search(aint, 10, i) << endl;
    cout << array_search(astring, 3, s) << endl;
    cout << array_search(adouble, 5, d) << endl;
    cout << array_search(aComplex, 4, c) << endl;
    return 0;
}
