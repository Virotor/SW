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
