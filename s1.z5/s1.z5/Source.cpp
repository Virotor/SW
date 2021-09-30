#include <iostream>
using namespace std;
int main() {
	srand(time(0));
	int firstDigitOfPassword1;
	firstDigitOfPassword1 = rand() % 10;
	int secondDigitOfPassword1;
	secondDigitOfPassword1 = rand() % 10;
	int thirdDigitOfPassword1;
	thirdDigitOfPassword1 = rand() % 10;
	int fourthDigitOfPassword1;
	fourthDigitOfPassword1 = rand() % 10;
	for (int firstDigitOfPassword2 = 0; firstDigitOfPassword2 < 10; firstDigitOfPassword2++) {
		for (int secondDigitOfPassword2 = 0; secondDigitOfPassword2 < 10; secondDigitOfPassword2++) {
			for (int thirdDigitOfPassword2 = 0; thirdDigitOfPassword2 < 10; thirdDigitOfPassword2++) {
				for (int fourthDigitOfPassword2 = 0; fourthDigitOfPassword2 < 10; fourthDigitOfPassword2++) {
					if (firstDigitOfPassword1 == firstDigitOfPassword2 and secondDigitOfPassword1 == secondDigitOfPassword2 and thirdDigitOfPassword1 == thirdDigitOfPassword2 and fourthDigitOfPassword1 == fourthDigitOfPassword2) {
						cout << "password: " << firstDigitOfPassword2 << secondDigitOfPassword2 << thirdDigitOfPassword2 << fourthDigitOfPassword2;
						break;
					}
				}
			}
		}
	}
	return 0;
}