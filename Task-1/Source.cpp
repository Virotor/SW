#include<iostream>
#include<conio.h>
#include<math.h>
#include<sstream>
#include <cstdlib>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	char ch;
	int n, k, i = 0;
	stringstream dd;
	cout << "Введите номер задания: ";
	ch=_getch();
	switch (ch)
	{
	case '1':
		cout << "Введите целое число: ";
		int a;
		cin >> a;
		double b, x, c, z, y;
		b = (double)a / 10;
		x = a / 10;
		c = (b - x) * 10;
		z = (a / 100);
		y = x - z * 10;
		cout << z << endl;
		cout << y << endl;
		cout << c << endl;
		break;
	case '2':
		cout << "Введите номер дня недели: ";
		int day;
		cin >> day;
		switch (day)
		{
		case 1:cout << "Понедельник"; break;
		case 2:cout << "Вторник"; break;
		case 3:cout << "Среда"; break;
		case 4:cout << "Четверг"; break;
		case 5:cout << "Пятница"; break;
		case 6:cout << "Суббота"; break;
		case 7:cout << "Воскресенье"; break;
		default: cout << "Нет такого дня"; break;
		}
		break;

	case'3':
		cout << "Введите два целых числа n и k: ";
		cin >> n >> k;
		dd << n;
		while (i != k)
		{
			cout << dd.str()[i];
			i++;
		}
		break;
	case '4':
		setlocale(LC_ALL, "rus");
		int x1, x2, x3, y1, y2, y3;
		cout << "Введите размеры отверстия : высота : "; cin >> y1;
		cout << "Введите размеры отверстия : длинна : "; cin >> y2;
		cout << "Введите размеры отверстия : ширина : "; cin >> y3;
		cout << "Введите размеры параллелепипеда : высота : "; cin >> x1;
		cout << "Введите размеры параллелепипеда : длинна : "; cin >> x2;
		cout << "Введите размеры параллелепипеда : ширина : "; cin >> x3;
		if (y1 == x1 || y1 < x1 || y1 > x1)
		{
			if (y1 == x1)cout << "Высоты совпали\n";
			if (y1 < x1)cout << "Размер отверстия по высоте меньше высоты параллелепипеда\n";
			if (y1 > x1)cout << "Размер отверстия по высоте больше высоты параллелепипеда\n";
		}
		if (y2 == x2 || y2 < x2 || y2 > x2)
		{
			if (y2 == x2)cout << "Длина совпала\n";
			if (y2 < x2)cout << "Размер отверстия по длине меньше длины параллелепипеда\n";
			if (y2 > x2)cout << "Размер отверстия по длине больше длины параллелепипеда\n";
		}
		if (y3 == x3 || y3 < x3 || y3 > x3)
		{
			if (y3 == x3)cout << "Ширина совпала\n";
			if (y3 < x3)cout << "Размер отверстия по ширине меньше ширины параллелепипеда\n";
			if (y3 > x3)cout << "Размер отверстия по ширине больше ширины параллелепипеда\n";
		}
		break;
	case'5':
	{
		int ran1, ran2, ran3, ran4;
		ran1 = rand() % 10;
		ran2 = rand() % 10;
		ran3 = rand() % 10;
		ran4 = rand() % 10;
		cout << "Сгенерирован код: " << ran1 << ran2 << ran3 << ran4;
		cout << endl;
		for (int i = 0; i < 10; i++)
		{

			for (int j = 0; j < 10; j++)
			{


				for (int k = 0; k < 10; k++)
				{
					for (int v = 0; v < 10; v++)
					{
						if (ran4 == i && ran3 == j && ran2 == k && ran1 == v)
						{
							cout << "Код найден " << v << k << j << i<<endl;
							system("pause");
							
						}
						else
						{
					
							cout << "Код не найден" << endl;
						}
						
					}
				}
			}
		}
		break;
	default:cout << "ошибка ввода" << endl;
	}
	return 0;
	}
}