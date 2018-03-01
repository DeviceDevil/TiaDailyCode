#include <iostream>
#include <callobj.h>
#include<Windows.h>
using namespace std;
int main() {
	int t, sum = 0;
	cout << "ples give me a number my firend" << endl;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		sum += i;

		
	}// for loop
	cout << "the sum of it all is "<<sum << endl;
	return 0;
	
}//main