/* CH-231-A
   hm2_p5.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include <cstdlib>
#include <set>

using namespace std;


int  main()
{
    int nr;
    set<int> sint;

    srand(time(NULL));

    while( sint.size() != 6 ){
        nr = rand() % 49 + 1;
        sint.insert(nr);
    }

    set<int>::iterator it;
    for( it = sint.begin(); it != sint.end(); it++){
        if (it == sint.begin())
			cout << *it;
		else cout << " " << *it;
    }
    cout << endl;

    return 0;
}