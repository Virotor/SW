#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b,c;
	cout << "Vvedite naturalnoe chislo a:";
	cin >> a;
	cout << "Vvedite naturalnoe chislo b:";
	cin >> b;
	c = 1;
	while ((a / c) >= 1)
	{
		c *= 10;
	}
	c = c / 10;
	while (b >= 1)
	{
		cout << (a / c) % 10;
		c /= 10;
		b--;
	}
}