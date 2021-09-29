#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int num;
	cout << "Введите число\n"; cin >> num;
	while (num)
	{
		cout << num % 10 << endl;
		num /= 10;
	}
	system("pause");



int day;
	cout << "Введите номер дня недели\n"; cin >> day;
	switch (day)
	{
	case(1):
		cout << "Понедельник\n";
		break;
	case(2):
		cout << "Вторник\n";
		break;
	case(3):
		cout << "Среда\n";
		break;
	case(4):
		cout << "Четверг\n";
		break;
	case(5):
		cout << "Пятница\n";
		break;
	case(6):
		cout << "Суббота\n";
		break;
	case(7):
		cout << "Воскресенье\n";
		break;
	default:
		cout << "Такого дня недели нет" << endl;
	}
	return 0;
}