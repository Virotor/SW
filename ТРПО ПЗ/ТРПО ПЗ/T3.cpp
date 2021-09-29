#include <iostream>
using namespace std;

int main() {
	cout << "Задание 3" << endl;
	int n, k, razr = 0;
	cout << "Введите число" << endl;
	cin >> n;
	cout << "Введите кол-во выведенных цифр" << endl;
	cin >> k;
	int n2 = n, a = 0;
	while (n2) {
		n2 = n2 / 10;
		a++;
	}
	for (int i = 0; i < (a - k); i++) {
		n /= 10;
	}
	cout << n << endl;

	return 0;
}