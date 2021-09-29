#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	char denNedeli;
	cout << "Введите номер дня недели : ";
	cin >> denNedeli;
	switch (denNedeli)
	{
	case '1': cout << "Понедельник"; break;
	case '2': cout << "Вторник"; break;
	case '3': cout << "Среда"; break;
	case '4': cout << "Четверг"; break;
	case '5': cout << "Пятница"; break;
	case '6': cout << "Суббота"; break;
	case '7': cout << "Воскресенье"; break;
	default: "Число введено неверно";  break;
	}
}