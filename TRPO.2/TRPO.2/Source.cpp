#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	cout << "*************Задание 2*******************" << endl;
	do {
		int day_number;
		cout << "Введите номер дня недели" << endl;
		cin >> day_number;
		if (day_number > 7 || day_number < 1)
			cout << "Номер дня введен неверно" << endl;
		else switch (day_number)
		{
		case 1: {
			cout << "Понедельник" << endl;
			break; }
		case 2: {
			cout << "Вторник" << endl;
			break; }
		case 3: {
			cout << "Среда" << endl;
			break; }
		case 4: {
			cout << "Четверг" << endl;
			break; }
		case 5: {
			cout << "Пятница" << endl;
			break; }
		case 6: {
			cout << "Суббота" << endl;
			break; }
		case 7: {
			cout << "Воскресенье" << endl;
			break; }
		}
		cout << "Введите 1, чтобы повторить текущее задание еще раз. \n Либо нажмите любую клавишу,чтобы перейти к следующему заданию" << endl;
		_getch();
		system("cls");
	} while (_getch() == '1');
}