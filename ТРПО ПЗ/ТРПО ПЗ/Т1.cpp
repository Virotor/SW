#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Задание 1" << endl;
	int x;
	cout << "Введите число" << endl;
	cin >> x;
	while (x) {
		cout << x % 10 << endl;
		x /= 10;
	}
	return 0;
}