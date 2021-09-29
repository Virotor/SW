#include <iostream>
#include <math.h>
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
	int number;
	cout << " Введите число: "; cin >> number;
	for (int i = 0; number > 0; i++) {
		int oneNumber = number % 10;
		cout << oneNumber <<'\n';
		number = (number - number % 10) / 10;
	}
	cout << " Task1 completed\n\n ";
}

void task2() {
	cout << " Task2\n";
	setlocale(LC_ALL, "rus");
	int numberWeek;
	cout << " Введите номер дня недели: "; cin >> numberWeek;

	switch (numberWeek) {
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

void task3() {
	cout << " Task3\n";
	setlocale(LC_ALL, "rus");
	int number, backNumber, b;
	cout << " Введите ваше число: "; cin >> number;
	cout << " Введите сколько чисел вернуть: "; cin >> backNumber;
	b = number;
	int c = 1;
	while (b /= 10) {
		c++;
	}

	if (number > 0 && backNumber > 0) {
		backNumber = pow(10, c - backNumber);
		number /= backNumber;
		cout << number<<'\n';
	}
	else {
		cout << " Неверный ввод " <<"\n";
		exit(0);
	}
	cout << " Task3 completed\n\n ";
}

void task3() {
	cout << " Task4\n";
	setlocale(LC_ALL, "rus");
	int length, width, height, lengthHole, widthHole;

	cout << " Введите длину параллелепипеда: "; cin >> length;
	cout << " Введите ширину параллелепипеда: "; cin >> width;
	cout << " Введите высоту параллелепипеда: "; cin >> height;
	cout << " Введите длину отверстия: "; cin >> lengthHole;
	cout << " Введите ширину отверстия: "; cin >> widthHole;

	if (length <= lengthHole && width <= widthHole ||
		height <= lengthHole && width <= widthHole ||
		height <= lengthHole && length <= widthHole ||
		width <= lengthHole && length <= widthHole ||
		width <= lengthHole && height <= widthHole ||
		length <= lengthHole && height <= widthHole)
		cout << " Параллелепипед влазит в отверстие ";
	else
		cout << " Параллелепипед не влазит в отверстие ";

	cout << " Task4 completed\n\n ";
}