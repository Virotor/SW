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
		case 1: cout << "�����������" << endl; break;
		case 2: cout << "�������" << endl; break;
		case 3: cout << "�����" << endl; break;
		case 4: cout << "�������" << endl; break;
		case 5: cout << "�������" << endl; break;
		case 6: cout << "�������" << endl; break;
		case 7: cout << "�����������" << endl; break;
		default: cout << "������: �������� �����." << endl;
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

int zadanie4()
{
		int w1, h1, w, h, l;
		cout << "Vvedite visotu i shirinu otverstiya:" << endl;
		cin >> w1 >> h1;
		cout << "Vvedite dannie parallelepipeda - shirina, dlina, visota:" << endl;
		cin >> w >> l >> h;
		if (w1 >= w && h1 >= h ||
			w1 >= w && h1 >= l ||
			w1 >= h && h1 >= w ||
			w1 >= h && h1 >= l ||
			w1 >= l && h1 >= w ||
			w1 >= l && h1 >= h) {
			cout << "Proshel";
		}
		else cout << "Ne proshel";
	return 0;
}
