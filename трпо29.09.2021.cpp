// трпо29.09.2021.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "n";
	cin >> n;
	while (n)
	{
		cout << n % 10 << endl;
		n /= 10;
	}
	return 0;
}