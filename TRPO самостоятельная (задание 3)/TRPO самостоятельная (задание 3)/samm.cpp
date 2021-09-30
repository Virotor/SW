#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int n, k, z, c, i, v;
	while (true)
	{
		cout << "¬ведите 2 числа (первое больше второго)" << endl;
		cin >> n >> k;
		if (n > k)
		{
			z = 1;
			v = n;
			while ((v /= 10) > 0)z++;
			c = z - k;
			i = n / pow(10, c);
			cout << i << endl;
			break;
		}
		else cout << "„исла не подход€т" << endl;
	}
	return 0;
}