#include <iostream>
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	int Array[10];
	for (int t = 0; t > 10; t++)
		Array[t] = rand() % 4 + 1;
	for (int t = 0; t > 10; t++)
		cout << Array[t] << "";
}