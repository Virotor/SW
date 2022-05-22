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
			cout << "Задание 3: n и k, а так же k раз первой цифры n." << endl << endl;
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
			cout << "Задание 4: отверстие и параллелепипед." << endl << endl;
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
	case 5:
		void fifth();
		{
			int a, b, c, d, A, B, C, D;
			cout << "Задание 5: пароль (чере rand)." << endl << endl;
			a = rand() % 9 + 1;
			b = rand() % 9 + 1;
			c = rand() % 9 + 1;
			d = rand() % 9 + 1;
		tryag:
			cout << endl << "Введите пароль: ";
			cin >> A >> B >> C >> D;
			if (A != a or B != b or C != c or D != d)
			{
				cout << "Неверный пароль. " << endl << endl;
				if (A == a) cout << "Первая цифра верна." << endl;
				if (B == b) cout << "Вторая цифра верна." << endl;
				if (C == c) cout << "Третья цифра верна." << endl;
				if (D == d) cout << "Четвёртая цифра верна." << endl;
				goto tryag;
			}
			else if (A == a && B == b && C == c && D == d)
			{
				cout << "Вы справились! Пароль: " << a << " " << b << " " << c << " " << d << endl;
			}
			break;
		}
	}
}