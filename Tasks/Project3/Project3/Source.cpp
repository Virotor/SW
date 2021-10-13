#include <iostream>
using namespace std;
int main()
{
	int m = 0, k = 0, a = 1;
	cout << "m = ";
	cin >> m;
	cout << "k = ";
	cin >> k;
	while ((m / a) >= 1)
	{
		a *= 10;
	}
	a /= 10;
	while (k >= 1)
	{
		cout << (m / a) % 10;
		k--;
	}
}