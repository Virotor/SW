#include<iostream>
#include<locale>
#include<math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int w;
	int x, y, z, q, l;
	cout << "ЗАДАНИЕ 1. " << endl;
	cout << " ВВЕДИТЕ ЦЕЛОЕ ЧИСЛО: " << endl;
	cin >> x;
	x = fabs(x);
	y = x;
	for (q = 0; y > 0; q++)
	{
		y = y / 10;
	}
	for (l = 0; x > 0; q--)
	{
		z = x / pow(10, (q - 1));
		x = x - z * pow(10, q - 1);
		cout << z << endl << endl;
	}

	return 0;
}

