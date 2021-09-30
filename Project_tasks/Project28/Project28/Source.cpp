#include <iostream>
using namespace std;
int main()
{
	int n , k , a;
	cin >> n;
	cin >> k;
	a = n % 10;
	n = n / 10;
	while (n > 0)
	{
		a = a * 10 + (n % 10);
		n = n / 10;
	}
	n = a % 10;
	a = a / 10;
	k--;
	while (k > 0)
	{
		n = n * 10 + (a % 10);
		a = a / 10;
		k--;
	}
	cout << n;
	return 0;
}