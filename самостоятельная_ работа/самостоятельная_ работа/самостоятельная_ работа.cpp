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
	case 3:
		void third();
		{
			int n = 0, k = 0, a = 1;
			cout << "Задание 3" << endl << endl;
			cout << "n = ";
			cin >> n;
			cout << "k = ";
			cin >> k;
			while ((n / a) >= 1)
			{
				a *= 10;
			}
			a /= 10;
			while (k >= 1)
			{
				cout << (n / a) % 10;
				k--;
			}
		}
		break;
	case 4:
		void fourth();
		{
			int H, W, h, w, l;
			cout << "Задание 4" << endl << endl;
			cout << "Введите высоту и ширину отверстия: " << endl;
			cout << "h = "; cin >> H;
			cout << "w = "; cin >> W;
			cout << "Введите высоту, ширину и длину параллелепипеда: " << endl;
			cout << "h = "; cin >> h;
			cout << "w = "; cin >> w;
			cout << "l = "; cin >> l;
			if (h <= H && w <= W)
				cout << "Параллелепипед может пройти через отверстие.";
			else if (h <= W && w <= H)
				cout << "Параллелепипед может пройти через отверстие.";
			else if (h <= H && l <= W)
				cout << "Параллелепипед может пройти через отверстие.";
			else if (h <= W && l <= H)
				cout << "Параллелепипед может пройти через отверстие.";
			else if (w <= H && l <= W)
				cout << "Параллелепипед может пройти через отверстие.";
			else if (w <= W && l <= H)
				cout << "Параллелепипед может пройти через отверстие.";
			else
				cout << "Параллелепипед не может пройти через отверстие.";
		}
		break;
	}
}