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
	int DAY;
	cout << "ЗАДАНИЕ 2." << endl;
	cout << "НОМЕР ДНЯ НЕДЕЛЯ:  " << endl;
	cin >> DAY;
	switch (DAY)
	{
	case 1:
		cout << "ПОНЕДЕЛЬНИК" << endl << endl;
		break;
	case 2:
		cout << "ВТОРНИК" << endl << endl;
		break;
	case 3:
		cout << "СРЕДА" << endl << endl;
		break;
	case 4:
		cout << "ЧЕТВЕРГ" << endl << endl;
		break;
	case 5:
		cout << "ПЯТНИЦА" << endl << endl;
		break;
	case 6:
		cout << "СУББОТА" << endl << endl;
		break;
	case 7:
		cout << "ВОСКРЕСЕНЬЕ" << endl << endl;
		break;
	default:
		cout << "ПОДУМАЙ ЛУЧШЕ( В НЕДЕЛЕ 7 ДНЕЙ )" << endl << endl;
	}
	cout << "ЗАДАНИЕ 3. " << endl;
	int n, k, d = 1;
	cout << "Введите n: " << endl;
	cin >> n;
	cout << "Введите k: " << endl;
	cin >> k;

	if (k <= n)
	{

		while ((n / d) >= 1)
		{
			d *= 10;
		}
		d /= 10;
		while (k >= 1)
		{
			cout << (n / d) % 10;
			d /= 10;
			k--;
		}
	}
	else
	{
		cout << "ERROR" << endl << endl;
	}
	cout << endl << "ЗАДАНИЕ 5." << endl;
	int f, g, p, r, a1 = 0, b1 = 0, c1 = 0, d1 = 0;
	srand((int)time(0));
	f = rand() % 10 + 0;
	g = rand() % 10 + 0;
	p = rand() % 10 + 0;
	r = rand() % 10 + 0;
	cout << "PASSWORD: " << f;
	cout << g;
	cout << p;
	cout << r << endl;
	while (a1 != f)
	{
		a1++;
	}
	while (b1 != g)
	{
		b1++;
	}
	while (c1 != p)
	{
		c1++;
	}
	while (d1 != r)
	{
		d1++;
	}
	cout << "GENERATE PASSWORD: " << a1;
	cout << b1;
	cout << c1;
	cout << d1;
	return 0;
}

