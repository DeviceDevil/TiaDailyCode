#include <iostream>
#include <ctime>
using namespace std;
int main() {
	char input = 'M';
	int room = 1;

	cout << "you run inside the abonde Vallte 666 to hide from the deathclaw" << endl;
	cout << "you discec to hide here for the time being" << endl;
	while (input != 'q') {
		switch (room) {
		case 1:
			cout << "you are in the first entry" << endl;
			cout << "you can go East(E) or down(" << endl;
			cin >> input;
			if (input == 'E')
				room = 2;
			break;
		case 2:

		}
	}
}