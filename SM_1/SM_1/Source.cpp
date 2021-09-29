#include<iostream>
#include<math.h>
using namespace std;

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
	cout << "Exercises 1\n";
	int number, a;
	cout << "Enter the number "; cin >> number;
	for (a = 1; number != 0; a++) {
		cout << number % 10 << endl;
		number /= 10;
	}
	cout << endl;
}
