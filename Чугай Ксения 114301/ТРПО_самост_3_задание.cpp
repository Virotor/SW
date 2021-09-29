#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n, k, a;
	cout << "¬ведите n: " << endl;
	cin >> n;
	cout << "¬ведите k: " << endl;
	cin >> k;
	a = 1;
	if (k <= n)
	{
		while ((n / a) >= 1)
		{
			a *= 10;
		}
		a /= 10;
		while (k >= 1)
		{
			cout << (n / a) % 10;
			a /= 10;
			k--;
		}
	}
	else
	{
			cout << "ќшибка: n>k" << endl;
		}
	return 0;
	}
