#include <iostream>
#include <time.h>

using std::cout;
using std::cin;
using std::string;

void task1();
void task2();
void task3();
void task4();
void task5();

int main() {
	task1();
	task2();
	task3();
	task4();
	task5();
	system("pause");
	return 0;
}

void task1() {
	cout << "task 1:\n";
	cout << "Enter number:\n";
	int NUM;
	cin >> NUM;
	for (int i = 0; NUM > 0; i++) {
		int oneNum = NUM % 10;
		cout << oneNum << '\n';
		NUM = (NUM - NUM % 10) / 10;
	}
	cout << "task 1 completed\n\n";
}

void task2() {
	cout << "task 2\n";
	setlocale(LC_ALL, "Russian");
	int DAY;
	cout << "Enter day\n";
	cin >> DAY;
	switch (DAY) {
	case 1: cout << "�����������\n"; break;
	case 2: cout << "�������\n"; break;
	case 3: cout << "�����\n"; break;
	case 4: cout << "�������\n"; break;
	case 5: cout << "�������\n"; break;
	case 6: cout << "�������\n"; break;
	case 7: cout << "�����������\n"; break;
	default: cout << "������\n";
	}
	cout << "task 2 conpleted\n\n";
}


void task3() {
	cout << "task 3\n";
	int N, k, i, n1;
	cout << "Enter number\n";
	cin >> N;
	cout << "Enter position\n";
	cin >> k;
	int copyN = N;
	for (i = 0; N > 0; i++) {
		N = (N - N % 10) / 10;
	}
	if (k > i) {
		cout << "������\n";
	}
	else for (i = i - k; i > 0; i--) {
		copyN = (copyN - copyN % 10) / 10;
	}
	cout << copyN << '\n';
	cout << "task 3 completed\n\n";
}
