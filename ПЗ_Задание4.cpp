#include <iostream>
#include <Math.h>
using namespace std; 
int main()
{
	setlocale(LC_ALL, "Russian");
	double diagonal1, diagonal2, diagonal3, width, length, height, Diameter;
	      cout << "Длина:"; cin >> width;
	      cout << "Ширина:"; cin >> length;
	      cout << "Высота:"; cin >> height;
	      cout << "Диаметр вписаного шара:"; cin >> Diameter;

	diagonal1 = pow((width * width) + (length * length), 1. / 2.);
	diagonal2 = pow((width * width) + (height * height), 1. / 2.);
	diagonal3 = pow((length * length) + (height * height), 1. / 2.);

	if (diagonal1 <= Diameter) {
		cout << "Первая сторона подошла" << endl;
	}
	else {
		cout << "Первая сторона не подошла" << endl;
	}
	if (diagonal2 <= Diameter) {
		cout << "Вторая сторона подошла" << endl;
	}
	else {
		cout << "Вторая сторона не подошла" << endl;
	}
	if (diagonal3 <= Diameter) {
		cout << "Третяя сторона подошла" << endl;
	}
	else {
		cout << "Третяя сторона не подошла" << endl;

	}

	return 0;
}


