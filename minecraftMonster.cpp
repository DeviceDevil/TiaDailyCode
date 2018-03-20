#include <iostream>
#include <ctime>
using namespace std;
void monster();
int main() {
	srand(time(NULL));
	while (1) {
		monster();
		system("pause");

	}

}
void monster() {
	int num = rand() % 100 + 1;
	if (num < 30)
		cout << "Oh no a Skeleton" << endl;
	else if (num < 50)
		cout << "Oh no a creeper" << endl;
	else if (num < 20)
		cout << "Oh no a Zombie" << endl;
}