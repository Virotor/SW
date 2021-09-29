#include <iostream>
#include <cstdlib>


using namespace std;

int main() {
	srand(time(NULL));
	int num1 = rand() % 10, num2 = rand() % 10, num3 = rand() % 10, num4 = rand() % 10;
	
	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++) {
			for (int c = 0; c < 10; c++) {
				for (int d = 0; d < 10; d++) {
					if (a == num1 and b == num2 and c == num3 and d == num4) cout << "I know the password  " << a << b << c << d;;
				}
			}
		}
	}
	return 0;
}