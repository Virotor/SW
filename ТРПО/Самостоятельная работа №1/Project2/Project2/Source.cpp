#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int dayNumber;
	setlocale(LC_ALL, "RUS");
	cout << "Введите номер дня недели: ";
	cin >> dayNumber;
		switch (dayNumber) {
		case 1:
			cout << "Понедельник";
			break;
		case 2:
			cout << "Вторник";
			break;
		case 3:
			cout << "Среда";
			break;
		case 4:
			cout << "Четверг";
			break;
		case 5:
			cout << "Пятница";
			break;
		case 6:
			cout << "Суббота";
			break;
		case 7:
			cout << "Воскресенье";
			break;
		default:
			cout << "Вы ввели неправильный номер дня недели: \n";
			
		
	}
	return 0;
}