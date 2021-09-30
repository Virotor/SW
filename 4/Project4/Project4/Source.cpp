#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double a, b, c, d, r1, r2, r3;
	cout << "Длина параллелепипеда" << endl;
	cin >> a;
	cout << "Ширина параллелепипеда" << endl;
	cin >> b;
	cout << "Высота параллелепипеда" << endl;
	cin >> c;
	cout << "Диаметр отверстия" << endl;
	cin >> d;
	r1 = sqrt(a * a + b * b);
	r2 = sqrt(a * a + c * c);
	r3 = sqrt(b * b + c * c);
	if ((d > r1), (d > r2), (d > r3))
		cout << "Войдёт" << endl;
	else cout << "Не войдёт" << endl;
	return 0;

}