/* CH-231-A
   hm1_p4.cpp
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
    
    cin >> s;
    while( s != "END"){
        vstring.push_back(s);
        cin >> s;
        size++;
    }

    int i;
    for( i = 0; i < size - 1; ++i){
        cout << vstring[i] << " ";
    }
    cout << endl;

    int nr = 1;
    vector<string>:: const_iterator pos;
    for( pos = vstring.begin(); pos != vstring.end(); ++pos){
        cout << *pos;
        nr++;
        if( nr < size )
            cout << ",";
    }
    cout << endl;

    return 0;
}