#include <iostream>
using namespace std;
int main() {

	char input;
	char z;
	char e;
	char w;
	char t;
	cout << "please enter a letter  it could be z, e, w, t" << endl << endl;
	cin >> input;

	if (input == 'z')
		cout << "Zulu" << endl << endl;
	else if (input == 'e')
		cout << "Echo" << endl << endl;
	else if (input == 'w')
		cout << "Whiskey" << endl << endl;
	else if (input == 't')
		cout << "Tango" << endl << endl;



}