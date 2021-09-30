#include <iostream>
#include <locale.h>
using namespace std;

void Task1()
{
	int num;
	
	cout << "Введите число: ";
	cin >> num;
	while (num > 0)
	{
		int temp = num % 10;
		cout << temp << endl;
		num /= 10;
	}
}

int main()
{
	setlocale(LC_ALL, "rus");

	Task1();
}
