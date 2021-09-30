#include <iostream>
#include <cmath>

int main() {
	using namespace std;
	setlocale(LC_ALL, "ru");
	int x, y = 1;
	cout << "Введите положительное число "; cin >> x;
	for (y; x != 0; y++) {
		cout << x % 10 << endl;
		x /= 10;
	}
	return 0;
}