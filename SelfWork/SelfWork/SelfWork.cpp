#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

void Task1()
{
	int num;
	string digit;

	cout << "Введите число: ";
	cin >> num;
	while (num > 0)
	{
		digit += to_string(num % 10);
		num /= 10;
	}
	for (int i = digit.length() - 1; i >= 0; i--)
	{
		cout << digit[i] << endl;
	}
	digit.clear();
}

int main()
{
	setlocale(LC_ALL, "rus");

	Task1();
}
