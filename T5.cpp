#include<iostream>
#include<math.h>
#include<string>
#include<windows.h>
#include <stdlib.h>
using namespace std;

int main()
{
	srand(time(0);
	int firstNumb1;
	firstNumb1 =rand() % 10;
	int secondNumb1;
	secondNumb1 = rand() % 10;
	int thirdNumb1;
	thirdNumb1 = rand() % 10;
	int fourthNumb1;
	fourthNumb1 = rand() % 10;
	for (int firstNumb2 = 0; firstNumb2 < 10; firstNumb2++) {
		for (int secondNumb2 = 0; secondNumb2 < 10; secondNumb2++) {
			for (int thirdNumb2 = 0; thirdNumb2 < 10; thirdNumb2++) {
				for (int fourthNumb2 = 0; fourthNumb2 < 10; fourthNumb2++) {
					if (firstNumb1 == firstNumb2 && secondNumb1 == secondNumb2 && thirdNumb1 == thirdNumb2 && fourthNumb1 == fourthNumb2) {
						cout << "Пароль:" << firstNumb2 << secondNumb2 << thirdNumb2 << fourthNumb2;
						break;
					}
				}
			}
		}
	}
	return 0;
}