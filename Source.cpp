#include <iostream>
using namespace std;
int main() {
	char input = 'a';
	int room = 1;
	
	cout << "Welcome to the four room plaza" << endl;
	cout << "This is your journey to explore around the plaza."<< endl << endl;

	while (input != 'q') {
		switch (room) {
		case 1:
			cout << "you are in room 1" << endl; //south park
			cout << "you can go south (s)" << endl;
			cin >> input;
			if (input == 's')
			room = 2;
			break;
		case 2: 
			cout << "you are in room 2" << endl;
			cout << "you can go north (n) or east (e)" << endl;// the vamp name is Alcard, i've been watching hellsing
			cin >> input;
			if (input == 'n')
				room = 1;
			 if (input == 'e')
				room = 3;
				break;
		case 3:
			cout << " you are in room 3" << endl;// HEWWO THERE owo
			cout << "you can go west (w) or south (s)" << endl;
			cin >> input;
			if (input == 'w')
				room = 2;
			 if(input == 's')
				room = 4;
				break;
		case 4:
			cout << "you are in room 4" << endl;
			cout << "you can go north(n)" << endl;
			cin >> input;
			if (input == 'n')
				room = 3;
			break;
		}//switch
	}//while

	system("pause");
}// main 