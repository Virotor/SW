#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Vvedite chislo: ";
	cin >> a;
	for (b = 0; a > b; a /= 10)
	{
		c = a % 10;
		cout << c << endl;
	}
	return 0;
}

int zadanie2()
{
	int y;
	cin >> y;
		switch (y)
		{
		case 1: cout << "Понедельник" << endl; break;
		case 2: cout << "Вторник" << endl; break;
		case 3: cout << "Среда" << endl; break;
		case 4: cout << "Четверг" << endl; break;
		case 5: cout << "Пятница" << endl; break;
		case 6: cout << "Суббота" << endl; break;
		case 7: cout << "Воскресенье" << endl; break;
		default: cout << "Ошибка: неверное число." << endl;
		}
	return 0;
}

int zadanie3()
{
	int n, k, x, i, r;
	cout << "Vvedite n, k: " << endl;
	cin >> n >> k;
	if (n == 0) cout << n; else
	{
		i = 0;
		n = abs(n);
		x = n;
		while (x > 0)
		{
			i++; x /= 10;
		}
		for (x = 1; x <= k; x++)
		{
			r = pow(10, i - x);
			cout << n / r;
			n %= r;
		}
	}
	return(0);
}
