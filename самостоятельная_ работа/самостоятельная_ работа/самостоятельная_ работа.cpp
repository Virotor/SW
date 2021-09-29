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
	case 2:
		void second();
		{
			int d;
			cout << "Задание 2: дни недели." << endl << endl;
			cout << "Введите номер дня в неделе: ";
			cin >> d;
			switch (d)
			{
			case 1:
				cout << "Понедельник.";
				break;
			case 2:
				cout << "Вторник.";
				break;
			case 3:
				cout << "Среда.";
				break;
			case 4:
				cout << "Четверг.";
				break;
			case 5:
				cout << "Пятница.";
				break;
			case 6:
				cout << "Суббота.";
				break;
			case 7:
				cout << "Воскресенье.";
				break;
			}
		}
		break;
	}
}