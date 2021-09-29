// ПЗ_Задание2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int e;
	setlocale(LC_ALL, "Russian");
	cout << "Введите номер дня недели ";
	cin >> e;
	switch (e) {
	case 1:
		cout << "понедельник" << endl;
		break;
	case 2:
		cout << "вторник" << endl;
		break;
	case 3:
		cout << "среда" << endl;
		break;
	case 4:
		cout << "четверг" << endl;
		break;
	case 5:
		cout << "пятница" << endl;
		break;
	case 6:
		cout << "суббота" << endl;
		break;
	case 7:
		cout << "воскресенье" << endl;
		break;
	}
	cout << endl;
}


