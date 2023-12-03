/* CH-231-A
   hm2_p6.cpp
   Matheas Roland Borsos
   m.borsos@constructor.univerity
*/

#include <iostream>
#include <fstream>
#include <map>

using namespace std;
ifstream fin("data.txt");

int main() {
	string fN, lN, birthDate, in;
	map<string, string> collection;

	if (!fin.good()) {
		cerr << "File was not opened correctly!" << endl;
		exit(1);
	}

	// reads all the first names, last names and birthdates from data.txt and saves it
	// to collection map
	if (fin.is_open())
		while (!fin.eof()) {
			fin >> fN >> lN >> birthDate;
			collection[fN + " " + lN] = birthDate;		
		}
	
	while (true) {
		cout << "Enter a name or Exit to close the program: ";
		getline(cin, in);

		if (in == "Exit")
			break;
		else {
			// checks if the input is in collection
			if (collection.find(in) != collection.end())
				cout << collection[in] << endl;
			else cout << "Name not found!" << endl;
		}
	}
	
	fin.close();

    return 0;
}