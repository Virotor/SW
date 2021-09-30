#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n, k, i=1, m, j, p; 
	cout << "¬ведите два целых числа:" << endl;
	cin >> n>> k;
	m=n;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	if (k <= i) j = pow(10, (i - k));
	p = int(m / j);
	cout << p << endl;
	return 0;
}