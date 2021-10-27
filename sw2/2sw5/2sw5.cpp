#include <iostream>
#include <math.h>
#include <string>
#include <random>
using namespace std;
int main() {
	//5 çàäàíèå
	setlocale(LC_ALL, "RUS");
	int num1 = rand() % 10, num2 = rand() % 10, num3 = rand() % 10, num4 = rand() % 10;
	string password, hackedNumber = "0000";

	password = to_string(num1) + to_string(num2) + to_string(num3) + to_string(num4);
	cout << "Ðàíäîìíûé ïàðîëü çàäàí." << endl;

	for (int i = 0; i <= 9; i++) {
		hackedNumber.replace(3, 1, to_string(i));
		if (hackedNumber == password) {
			cout << "Ïàðîëü âçëîìàí - " << hackedNumber << endl;
		}
		for (int j = 0; j <= 9; j++) {
			hackedNumber.replace(2, 1, to_string(j));
			if (hackedNumber == password) {
				cout << "Ïàðîëü âçëîìàí - " << hackedNumber << endl;
			}
			for (int l = 0; l <= 9; l++) {
				hackedNumber.replace(1, 1, to_string(l));
				if (hackedNumber == password) {
					cout << "Ïàðîëü âçëîìàí - " << hackedNumber << endl;
				}
				for (int f = 0; f <= 9; f++) {
					hackedNumber.replace(0, 1, to_string(f));
					if (hackedNumber == password) {
						cout << "Ïàðîëü âçëîìàí - " << hackedNumber << endl;
					}
				}
			}
		}
	}
	return 0;
}