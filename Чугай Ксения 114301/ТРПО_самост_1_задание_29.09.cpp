#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int k, n, n1, i, h;
	cout << "¬ведите число: " << endl;
	cin >> n;
	n = fabs(n);
	n1 = n;
	for (i = 0; n1 > 0; i++)
	{
		n1 = n1 / 10;
	}
	for (h = i; n > 0; i--)
	{
		k = n / pow(10, (i - 1));
		n = n - k * pow(10, i - 1);
		cout << k << endl;
	}
	return 0;
}