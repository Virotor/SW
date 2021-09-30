#include<iostream>
#include<math.h>
using namespace std;
int main() {
	char first, second, third, fourth;
	char cod[5]{ rand() % (57 - 48 + 1) + 48, rand() % (57 - 48 + 1) + 48, rand() % (57 - 48 + 1) + 48, rand() % (57 - 48 + 1) + 48 };
	for (first = '0'; first <= '9'; ++first) {
		if (cod[0] == first) {
			cout << first;
		}
	}
	for (second = '0'; second <= '9'; ++second) {
		if (cod[1] == second) {
			cout << second;
		}
	}
	for (third = '0'; third <= '9'; ++third) {
		if (cod[2] == third) {
			cout << third;
		}
	}
	for (fourth = '0'; fourth <= '9'; ++fourth) {
		if (cod[3] == fourth) {
			cout << fourth;
		}
	}
	return 0;
}