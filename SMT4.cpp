#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, x, y, z;
	cout << " Введите длину, ширину и высоту отверстия " << endl;
	cin >> a >> b >> c;
	cout << " Введите длину, ширину и высоту параллелепипеда " << endl;
	cin >> x >> y >> z;

	if ((a>=z & b>=y) || (a >= z & b >= x) || (a >= x & b >= y) || (b >= z & a >= y) || (b >= z & a >= x) || (b >= x & a >= y))
	{
		cout << " Можно " << endl;
	}
	else
	{
		cout << " Нельзя " << endl;
	}
	return 0;
}