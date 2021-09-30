#include<iostream>
#include<locale>
#include<math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int w;
	int x, y, z, q, l;
	cout << "ЗАДАНИЕ 1. " << endl;
	cout << " ВВЕДИТЕ ЦЕЛОЕ ЧИСЛО: " << endl;
	cin >> x;
	x = fabs(x);
	y = x;
	for (q = 0; y > 0; q++)
	{
		y = y / 10;
	}
	for (l = 0; x > 0; q--)
	{
		z = x / pow(10, (q - 1));
		x = x - z * pow(10, q - 1);
		cout << z << endl << endl;
	}
	int DAY;
	cout << "ЗАДАНИЕ 2." << endl;
	cout << "НОМЕР ДНЯ НЕДЕЛЯ:  " << endl;
	cin >> DAY;
	switch (DAY)
	{
	case 1:
		cout << "ПОНЕДЕЛЬНИК" << endl << endl;
		break;
	case 2:
		cout << "ВТОРНИК" << endl << endl;
		break;
	case 3:
		cout << "СРЕДА" << endl << endl;
		break;
	case 4:
		cout << "ЧЕТВЕРГ" << endl << endl;
		break;
	case 5:
		cout << "ПЯТНИЦА" << endl << endl;
		break;
	case 6:
		cout << "СУББОТА" << endl << endl;
		break;
	case 7:
		cout << "ВОСКРЕСЕНЬЕ" << endl << endl;
		break;
	default:
		cout << "ПОДУМАЙ ЛУЧШЕ( В НЕДЕЛЕ 7 ДНЕЙ )" << endl << endl;
	}
	return 0;
}

