#include <iostream>
#include <cstdlib>


using namespace std;

int main() {
	srand(time(NULL));
	char num1 = rand() % '10' + '48', num2 = rand() % '10' + '48', num3 = rand() % '10' + '48', num4 = rand() % '10' + '48';
	
	for (char a = '48'; a < '58'; a++) {
		for (char b = '48'; b < '58'; b++) {
			for (char c = '48'; c < '58'; c++) {
				for (char d = '48'; d < '58'; d++) {
					if (a == num1 and b == num2 and c == num3 and d == num4) cout << "I know the password  " << (int) a <<(int) b << (int) c << (int) d;;
				}
			}
		}
	}
	return 0;
}