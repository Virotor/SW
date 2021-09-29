#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num;
	cout << "Введите номер дня недели" << endl;
	cin >> num;
	switch (num)
	{
		case 1: cout << "Понедельник"; break;
		case 2: cout << "Вторник"; break;
		case 3: cout << "Среда"; break;
		case 4: cout << "Четверг"; break;
		case 5: cout << "Пятница"; break;
		case 6: cout << "Субботв"; break;
		case 7: cout << "Восскресенье"; break;
		default: cout << "Введите корректный номер дня недели";
	}
	return 0;
}