#include <iostream>
using namespace std;


int main()
{

	setlocale(LC_ALL, "Russian");
	int a, b = 0;

	cout << "Введите число:"; cin >> a;
	if (a < 0) a = -a;
	if (a == 0) cout << 0 << endl;
	else
	{
		while (a)
		{
			b = 10 * b + a % 10;
			a /= 10;
		}

		while (b)
		{
			cout << b % 10 << endl;
			b /= 10;
		}
	}
	return 0;
}
