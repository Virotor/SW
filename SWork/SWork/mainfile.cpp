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
	cout << " ������� �����: "; cin >> s;
	for (int i = 0; i < size(s); i++)
		cout << s[i]<<"\n";
	cout << " Task1 completed\n\n ";
}

void task2() {
	cout << " Task2\n";
	setlocale(LC_ALL, "rus");
	int a;
	cout << " ������� ����� ��� ������: "; cin >> a;

	switch (a) {
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