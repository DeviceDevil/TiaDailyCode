#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int iterms;
	int lastline;
	long sum;
	ifstream readfile;
	cout << "How many terms do you need in the Fibonacci sequence?" << endl;
	readfile.open("Fibonacci.txt");
	readfile >> iterms;
	cout << iterms << endl;
	//system("Pause");
	long temp1 = 0;
	long temp2 = 1;
	for (int i = 0; i < iterms; i++) {


		sum = temp1 + temp2;//fib seq
		temp1 = temp2;
		temp2 = sum;
		cout << sum << endl;

	}
	system("pause");
}