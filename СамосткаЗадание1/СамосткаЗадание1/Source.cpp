#include <iostream>
#include <math.h>
using namespace std;
int main() {
// 1 �������
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� - ";
	int number;
	cin >> number;
	number = abs(number);
	do {
		cout << number % 10 << endl << endl;
		number = number / 10;
	} while (number > 0);
	system("pause");
	return 0;
}