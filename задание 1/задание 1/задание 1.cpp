#include<iostream>
#include<cmath>
using namespace std;
int main()                                       //1 задание
{
	setlocale(LC_ALL, "ru");
	int num1;
	cout << "Введите число: ";
	cin >> num1;
	num1 = abs(num1);
	while (num1 > 0)
	{
		cout << num1 % 10 << endl;
		num1 /= 10;
	}
	system("pause");
	return 0;
}
