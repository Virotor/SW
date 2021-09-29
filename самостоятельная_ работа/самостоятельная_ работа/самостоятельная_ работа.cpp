#include "pch.h"
#include <iostream>
#include<locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "Введите номер задания: ";
	cin >> n;
	switch (n)
	{
	case 1:
		void first();
		{
			int num;
			cout << "Задание 1: Выведение цифр числе в отдельных строках." << endl << endl;
			cout << "Введите число: ";
			cin >> num;
			while (num)
			{
				cout << num % 10 << endl;
				num /= 10;
			}
		}
		break;