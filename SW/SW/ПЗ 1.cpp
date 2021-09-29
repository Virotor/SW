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





		cout << "Задание 2" << endl;
	int d;
	cout << "Введите номер дня недели" << endl;
	cin >> d;
	switch (d)
	{
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

	default:
		cout << "Введенный день не существует" << endl;

		return 0;
	}




	cout << "Задание 3" << endl;
	int n, k, razr = 0;
	cout << "Введите число" << endl;
	cin >> n;
	cout << "Введите кол-во выведенных цифр" << endl;
	cin >> k;
	int n2 = n,a=0;
	while (n2) {
		n2 = n2 / 10;
		a++;
	}
	for (int i = 0; i < (a - k); i++) {
		n /= 10;
	}
	cout << n << endl;

	return 0;





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




	cout << "Задание 5" << endl;
	int Arr[4];
	for (int i = 0; i < 4; i++) {
		Arr[i] = rand() % 9;
	}
	cout << "Пароль генерируется...\nПароль сгенерирован..." << endl;

	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			for (int z = 0; z < 10; z++) {
				for (int k = 0; k < 10; k++) {
					if (Arr[0] == x && Arr[1] == y && Arr[2] == z && Arr[3] == k) {
						cout << "Пароль подобран: " << x << y << z << k;
						break;
					}

				}
			}
		}
	}
	return 0;


}