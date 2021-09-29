#include <iostream>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::string;
using std::cin;

void task1();

void task2();

void task3();

void task4();

void task5();

int main() {
	task1;
	task2;
	task3;
	task4;
	task5;
	system("pause");
	return 0;
}

void task1() {
	cout << " Task1\n ";
	setlocale(LC_ALL, "rus");
	string s;
	cout << " Введите число: "; cin >> s;
	for (int i = 0; i < size(s); i++)
		cout << s[i]<<"\n";
	cout << " Task1 completed\n\n ";
}

void task2() {
	cout << " Task2\n";
	setlocale(LC_ALL, "rus");
	int a;
	cout << " Введите номер дня недели: "; cin >> a;

	switch (a) {
	case 1: cout << " Понедельник "; break;
	case 2: cout << " Вторник "; break;
	case 3: cout << " Среда "; break;
	case 4: cout << " Четверг "; break;
	case 5: cout << " Пятница "; break;
	case 6: cout << " Суббота "; break;
	case 7: cout << " Воскресенье "; break;
	default: cout << " Неверный ввод "; break;
	}
	cout << " Task2 completed\n\n ";
}