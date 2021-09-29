#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	int a;
	cout << "Введите номер дня " << endl;
	cin >> a;
	while (a < 1 || a > 7)
	{
		cout << "В неделе только 7 дней. Введите число от 1 до 7" << endl;
		cin >> a;
	}
	switch (a)
	{
	case 1:
		cout << "Понедельник" << endl;
		break;
	case 2:
		cout << "Вторник" << endl;
		break;
	case 3:
		cout << "Среда" << endl;
		break;
	case 4:
		cout << "Четверг" << endl;
		break;
	case 5:
		cout << "Пятница" << endl;
		break;
	case 6:
		cout << "Суббота" << endl;
		break;
	case 7:
		cout << "Воскресенье" << endl;
		break;
	}
	return 0;
}

