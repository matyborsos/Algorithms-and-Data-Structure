/* CH-231-A
   hm1_p5.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<string> vstring;
    string s;
    int size = 1;
    
    getline(cin, s);
    while( s != "END"){
        vstring.push_back(s);
        getline(cin, s);
        size++;
    }
    size--;

    if( size > 4 ){
        string snew;
        snew = vstring[1];
        vstring[1] = vstring[4];
        vstring[4] = snew;
    }
    else {
        cout << "One or both positions do not exist!" << endl;
    }

    vstring[size - 1] = "???";

    int i, nr = 1;
    for( i = 0; i < size; ++i){
        cout << vstring[i];
        nr++;
        if( nr <= size )
            cout << ",";
    }
    cout << endl;

    nr = 1;
    vector<string>:: const_iterator pos1;
    for( pos1 = vstring.begin(); pos1 != vstring.end(); ++pos1){
        cout << *pos1;
        nr++;
        if( nr <= size )
            cout << ";";
    }
    cout << endl;

    vector<string>:: const_iterator pos2;
    for( pos2 = vstring.end() - 1; pos2 >= vstring.begin(); pos2--){
        cout << *pos2 << " ";
    }
    cout << endl;



    return 0;
}