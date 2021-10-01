#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, c, d, e;

	cout << "длина отверстия:";            cin >> a;

	cout << "ширина отверстия:";           cin >> b;

	cout << "длина параллелепипеда:";      cin >> c;

	cout << "ширина параллелепипеда:";     cin >> d;

	cout << "высота параллелепипеда:";     cin >> e;

	if (a < c || b < e)

		cout << "проходит через отверстие палучаеца";
	else cout << "не проходит через отверстие палучаеца";

	return 0;
}