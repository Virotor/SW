#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Rus");
	cout << "Задание 2" << endl;
	int d;
	cout << "Введите номер дня недели" << endl; 
	cin >> d;
	switch (d){
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

		default:
		cout << "Введенный день не существует" << endl;

	}
	return 0;
}