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
	int a;
	cout << "Введите номер дня недели "; cin >> a;
	switch (a) {
	case 1:
		cout << "Понедельник" << endl;
		break;
	case 2:
		cout << "Вторник" << endl;
		break;
	case 3:
		cout << "Среда" << endl;
		break;
	case 4:
		cout << "Четверг" << endl;
		break;
	case 5:
		cout << "Пятница" << endl;
		break;
	case 6:
		cout << "Суббота" << endl;
		break;
	case 7:
		cout << "Воскресенье" << endl;
		break;
	}
	int n, k, s, c = 0, b;
	cout << "Введите число n "; cin >> n;
	cout << "Введите чило k "; cin >> k;
	s = n;
	for (c; s > 0; c++) {
		s /= 10;
	}
	if (k > c)
		cout << n << endl;
	else
	{
		b = n / pow(10, c - k);
		cout << b << endl;
	}
	double l, h, v, r;
	int j;
	cout << "Радиус отверстия = "; cin >> r;
	cout << "Длина = "; cin >> l;
	cout << "Ширина = ";  cin >> v;
	cout << "Высота = "; cin >> h;
	if ((pow(l * l + v * v, 0.5)) <= r * 2)
		j = 1;
	else if ((pow(h * h + v * v, 0.5)) <= r * 2)
		j = 1;
	else if ((pow(l * l + h * h, 0.5)) <= r * 2)
		j = 1;
	else
		j = 2;
	int f = j % 2;

	return 0;
}