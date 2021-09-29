// трпо2.29.09.2021.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int k, n, c, i = 0, r;
	cin >> n >> k;
	while (c > 0)
	{
		i++;
		c = c / 10;

	}
	for (c = 1; c <= k; c++)
	{
		r = pow(10, i - c);
		cout << n / r << '';
		n = n % r;
	}


    
}

