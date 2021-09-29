#include <math.h>

#include <iostream>

using namespace std;
int main()
{
	//1 задание
	setlocale(LC_ALL, "rus");

	int number;
	cout << "Введите целое число" << endl << endl;
	cin >> number;
	number = abs(number);
	do {
		cout << number % 10 << endl;
		number = number / 10;
	} while (number > 0);
	system("pause");
	return 0;
}