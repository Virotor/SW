#include<iostream>
#include<stdio.h>
#include<locale.h>

using namespace std;

int main() 
{
	int x;
	setlocale(LC_ALL, "Rus");
	cout << "Введите номер дня " << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "Понедельник\n";
		break;
	case 2:
		cout << "Вторник\n";
		break;
	case 3:
		cout << "Среда\n";
		break;
	case 4:
		cout << "Четверг\n";
		break;
	case 5:
		cout << "Пятница\n";
		break;
	case 6:
		cout << "Суббота\n";
		break;
	case 7:
		cout << "Воскресенье\n";
		break;
	default:
		cout << "Вы ввели неверный номер дня\n";
		break;
	}
	system("pause");
	return 0;
}