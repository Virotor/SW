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
	case 2: {
		int t;
		cout << "Введите номер дня недели ";
		cin >> t;
		switch (t) {
		case 1: cout << "Понедельник" << "\n"; break;
		case 2: cout << "Вторник" << "\n"; break;
		case 3: cout << "Среда" << "\n"; break;
		case 4: cout << "Четверг" << "\n"; break;
		case 5: cout << "Пятница" << "\n"; break;
		case 6: cout << "Суббота" << "\n"; break;
		case 7: cout << "Воскресенье" << "\n"; break;
		}
		break;
	}
	case 3: {
		int b1;
		string a1;
		cout << "Введите число ";
		cin >> a1 >> b1;
		if (b1 > size(a1)) {
			cout << "Ошибка";
			return 1;
		}
		a1 = a1.erase(b1, size(a1));
		cout << a1;
		return 0;
	}
		  break;
	case 4: {
		int a2, b2, c2, x2, y2;
		cout << "Введите размеры отверстия " << "\n";
		cin >> x2;
		cin >> y2;
		cout << "Введите размеры параллелепипеда " << "\n";
		cin >> a2 >> b2 >> c2;
		if (x2 > y2) { double t = x2; x2 = y2; y2 = t; }
		if (a2 > b2) { double t = a2; a2 = b2; b2 = t; }
		if (b2 > c2) { double t = b2; b2 = c2; c2 = t; }
		if (a2 > b2) { double t = a2; a2 = b2; b2 = t; }
		if ((a2 < x2) && (b2 < y2)) cout << "Параллелепипед пройдет в отверстие";
		else cout << "Параллелепипед не пройдет в отверстие";
		return 0; } break;
	}
}