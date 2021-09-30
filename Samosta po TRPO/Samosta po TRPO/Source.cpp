#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "Укажите номер задания: " << "\n 1 - Задание 1" << "\n 2 - Задание 2" << "\n 3 - Задание 3" << "\n 4 - Задание 4" << "\n" << "\n";
	int i;
	cin >> i;
	switch (i) {
	case 1: {int a, b, c;
		cout << "Введите число ";
		cin >> a;
		c = a;
		int f = 0;
		do {
			c /= 10;
			f++;
		} while (c > 0);
		cout << f << endl;
		int s;
		for (int d = f; d >= 1; d--) {
			s = pow(10, d - 1);
			b = (a / s) % 10;
			cout << b << "\t";
		}
		break;
	}
	}
}