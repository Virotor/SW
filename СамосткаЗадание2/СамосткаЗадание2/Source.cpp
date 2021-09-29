#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int day;
	cout << "Введите номер дня недели." << endl;
	cin >> day;
	if (day > 0 && day < 8) {
		switch (day)
		{
		case 1:
			cout << "Понедельник" << endl << endl;
			break;
		case 2:
			cout << "Вторник" << endl << endl;
			break;
		case 3:
			cout << "Среда" << endl << endl;
			break;
		case 4:
			cout << "Четверг" << endl << endl;
			break;
		case 5:
			cout << "Пятниица" << endl << endl;
			break;
		case 6:
			cout << "Суббота" << endl << endl;
			break;
		case 7:
			cout << "Воскресенье" << endl << endl;
			break;
		default:
			break;
		}
	}
	else { cout << "В неделе всего 7 дней, команда не выполняется" << endl; }
	return 0;
}