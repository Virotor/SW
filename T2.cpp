#include<iostream>
#include<math.h>
#include<string>
#include<windows.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int number;
	cout << "Введите номер дня недели: " << endl;
	cin >> number;
	switch (number)
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