#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;
char FunctionDisaster();
int main() {
	while (1) {
		srand(time(NULL));
		FunctionDisaster();
		system("pause");
	}
}
char FunctionDisaster() {
	int num = rand() % 100 + 1;
	if (num < 3) {
		return 'm';
	}
	else if (num < 15) {
		return 'a';
	}
	else if (num < 30) {
		return 'f';
	}
	else if (num < 40) {
		return 'r';
	}
	else if (num < 60) {
		return 'n';
	}
	
}