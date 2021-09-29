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
	cout << " ������� �����: "; cin >> number;
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
	cout << " ������� ����� ��� ������: "; cin >> numberWeek;

	switch (numberWeek) {
	case 1: cout << " ����������� "; break;
	case 2: cout << " ������� "; break;
	case 3: cout << " ����� "; break;
	case 4: cout << " ������� "; break;
	case 5: cout << " ������� "; break;
	case 6: cout << " ������� "; break;
	case 7: cout << " ����������� "; break;
	default: cout << " �������� ���� "; break;
	}
	cout << " Task2 completed\n\n ";
}

void task3() {
	setlocale(LC_ALL, "rus");
	int number, backNumber, b;
	cout << " ������� ���� �����: "; cin >> number;
	cout << " ������� ������� ����� �������: "; cin >> backNumber;
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
		cout << " �������� ���� " <<"\n";
		exit(0);
	}
}