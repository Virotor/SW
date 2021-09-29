#include <iostream>
using namespace std;

int main() {
	cout << "Задание 4" << endl;
	int a, b, c, d, S, r, D;
	cout << "Длина параллелепипеда:"; cin >> a;
	cout << "Ширина параллелепипеда:"; cin >> b;
	cout << "Высота параллелепипеда:"; cin >> c;
	cout << "Глубина отверстия:"; cin >> d;
	cout << "Радиус отвертия:"; cin >> r;
	if (a < r, c < r, b < d) {
		cout << "Параллелепипед пройдёт в отверстие" << endl;
	}
	else {
		cout << "Параллелепипед не пройдёт в отверстие" << endl;
	}
	return 0;
}