#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int week;
	cout << endl << "Ведите номер дня недели:";
	cin >> week;
	switch (week)
	{
	case 1:
		cout << endl << "Понедельник" << endl; break;
	case 2:
		cout << endl << "Вторник" << endl; break;
	case 3:
		cout << endl << "Среда" << endl; break;
	case 4:
		cout << endl << "Четверг" << endl; break;
	case 5:
		cout << endl << "Пятница" << endl; break;
	case 6:
		cout << endl << "Суббота" << endl; break;
	case 7:
		cout << endl << "Воскресенье" << endl; break;
	default:
		cout << endl << "Такого дня недели не существует" << endl;
	}
	return(0);
}