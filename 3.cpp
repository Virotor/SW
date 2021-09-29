#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	long long int n, c;
	int k, i;
	cout << "¬ведите n и k: ";
	cin >> n>> k;
	c = n;
	for (i = 0; c > 0; i++)
	{
		c /= 10;
	}
	i -= k;
	for (int j = i; j > 0; j--)
	{
		n /= 10;
	}
	cout << n << endl;

    system("pause");
	return 0;
}