#include <iostream>
#include <locale>
#include <string>
using namespace std;

int task1();

int main()
{
	setlocale(LC_ALL,"rus");
	task1();
	return 0;
}

int task1()
{
	cout << "\tЗадание 1\n";
	cout << "Введите целое число: ";
	int number;
	cin >> number;
	string digit;
	while (number > 0)
	{
		digit += to_string(number % 10);
		number /= 10;
	}
	for (int i = digit.length(); i >= 0; i--)
		cout << digit[i] << endl;
	return 0;
}
