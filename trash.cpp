#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	string line;
	ifstream myfile("homestuck.txt");
	if (myfile.is_open())
		while (getline(myfile, line)) {
			cout << line << endl;
			cout << line << endl;
		}//while loop hoop poo oof
	myfile.close();

}// main
