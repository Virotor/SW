#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int n;
	cout << "Выберите номер дня недели: " << endl;
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "Вы выбрали понедельник" << endl;
		break;
	case 2:
		cout << "Вы выбрали вторник" << endl;
		break;
	case 3:
		cout << "Вы выбрали среду" << endl;
		break;
	case 4:
		cout << "Вы выбрали четверг" << endl;
		break;
	case 5:
		cout << "Вы выбрали пятницу" << endl;
		break;
	case 6:
		cout << "Вы выбрали субботу" << endl;
		break;
	case 7:
		cout << "Вы выбрали воскресенье" << endl;
		break;
	default:
		cout << "Не существует дня недели для такого номера" << endl;
	}
	return 0;
}