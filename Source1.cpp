#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите трехзначное число: ";
	cin >> a;
	while (a)
	{
		cout << a % 10 << endl;
		a /= 10;

	}
	system("pause");
	return 0;
}