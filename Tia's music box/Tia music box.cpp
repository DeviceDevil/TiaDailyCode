#include <iostream>
#include <ctime>
#include <windows.H>


using namespace std;
int main() {

	int input=0;

	while (input != 'q') {
		cout << "what do ya want to hear 1-pork soda, 2-snail house, 3-sweet devil, 4-Your realty, 5-Tomorrow Comes Today ??" << endl;
		cin >> input;
		switch (input) {
		case 1:
			cout << "pork soda" << endl;
			PlaySound(TEXT("Glass-Animals-Pork-Soda-unique-piano-cover-by-Cragezy.wav"), NULL, SND_FILENAME);
			break;
		case 2:
			cout << "snail house" << endl;
			PlaySound(TEXT("Snails-House-Pixel-Galaxy-Official-MV.wav"), NULL, SND_FILENAME);
			
			break;
		case 3:
			cout << "sweet Devil" << endl;
			PlaySound(TEXT("Sweet-Devil.wav"), NULL, SND_FILENAME);
			
			break;
		case 4:
			cout << "your reality" << endl;
			PlaySound(TEXT("Your-Reality-Doki-Doki-Literature-Club-Vocal-Cover-by-Lizz-Robinett.wav"), NULL, SND_FILENAME);
			
			
			break;
		case 5:
			cout << "Tomorrow Comes Today" << endl;
			PlaySound(TEXT("Gorillaz-Tomorrow-Comes-Today-Official-Video.wav"), NULL, SND_FILENAME);
			break;
		}// end of switch
	}// end of while
}// end of main