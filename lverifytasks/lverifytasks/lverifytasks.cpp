#include <iostream>
using namespace std;


int main()
{
	int week,chislo,ostatok;
	setlocale(LC_ALL, "RUS");
	//task2
	cout << endl << "Ведите номер дня недели:";
	cin >> week;
	switch (week)
	{
	case 1:
		cout << endl << "Понедельник"; break;
	case 2:
		cout << endl << "Вторник"; break;
	case 3:
		cout << endl << "Среда"; break;
	case 4:
		cout << endl << "Четверг"; break;
	case 5:
		cout << endl << "Пятница"; break;
	case 6:
		cout << endl << "Суббота"; break;
	case 7:
		cout << endl << "Воскресенье"; break;
	default:
		cout << endl << "такого дня недели не существует"; break;
	}

		return(0);
	}

