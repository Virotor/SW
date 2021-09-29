#include <iostream>
using namespace std;
int four() {
	double a, b, c, d, p;
	setlocale(LC_ALL, "Russian");
	cout << " Введите длину параллелепипеда=";
	cin >> a;
	cout << " Введите высоту параллелепипеда=";
	cin >> b;
	cout << " Введите ширину параллелепипеда=";
	cin >> c;
	cout << " Введите ширину отверстия ";
	cin >> d;
	cout << " Введите высоту отверстия ";
	cin >> p;
	if (c > 0 && b > 0 && a > 0 && d > 0 && p > 0) {
		if (a <= p and c <= d and b <= d)
			cout << " Проходит";
		else if (a <= d and c <= p and b <= p)
			cout << " Проходит";
		else if (c <= p and c <= d and b <= d)
			cout << " Проходит";

		else if (c <= d and c <= p and p <= d)
			cout << " Проходит";
		else if (b <= p and c <= d and b <= d)
			cout << " Проходит";
		else if (b <= d and c <= p and p <= d)
			cout << " Проходит";
		else
			cout << " Не проходит";



	}
	else cout << " Ошибка ";
	return 0;


}
