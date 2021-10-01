#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int day;
	string week[7] = { "Понедельник", "Вторник","Среда","Четверг","Пятница","Суббота","Воскресенье" };
	cout << "Введите номер дня недели:";
	cin >> day;
	cout << week[day - 1] << endl;
	return 0;
}
