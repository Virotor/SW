#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int a, k;
	cout << "Введите число : "; cin >> a;
	cout << "Введите нужное кол-во цифр для вывода : "; cin >> k;
	int kol = 1, p;
	p = a;
	while ((a / kol) >= 1)
	{
		kol *= 10;
	}
	kol /= 10;
	while (k >= 1)
	{
		cout << (a / kol) % 10;
		kol /= 10;
		k--;
	}
}