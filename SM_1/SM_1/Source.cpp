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


void task2() {
	cout << "Exercises 2\n";
	int WEEK_NUM;
	cout << "Enter the day number "; cin >> WEEK_NUM;
	if (WEEK_NUM > 7)
		cout << "Error";
	else {
		switch (WEEK_NUM) {
		case 1: cout << "Monday" << endl; break;
		case 2: cout << "Tuesday" << endl; break;
		case 3: cout << "Wednesday" << endl; break;
		case 4: cout << "Thursday" << endl; break;
		case 5: cout << "Friday" << endl; break;
		case 6: cout << "Saturday" << endl; break;
		case 7: cout << "Sunday" << endl; break;
		}
	}
	cout << endl << endl ;
}
