#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));

	int a;
	int b;

	while (1) {


		a = rand() % 2000 + 200;
		b = rand() % 2000 + 200;
		
		Beep(a, b);


	}


}