#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	double a, b, c, d, e;
	cout << "Длина отверстия ";
	cin >> a;
	if (a <= 0)return 0;
	cout << "Ширина отверстия ";
	cin >> b;
	if (b <= 0)return 0;
	cout << "Длина параллелепипеда ";
	cin >> c;
	if (c <= 0)return 0;
	cout << "Ширина параллелепипеда ";
	cin >> d;
	if (d <= 0)return 0;
	cout << "Высота параллелепипеда ";
	cin >> e;
	if (e <= 0)return 0;
	if (a < c || b < e )
		cout << "Параллелепипед не проходит в отверстие";
	else cout << "Параллелепипед проходит в отверстие";

	return 0;
}

