#include "pch.h"
#include <iostream>
#include "math.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int n;// n от слова number
	cout << "введите цифру "; cin >> n;
	switch (n)
	{
	case 1: cout << "понедельник"; break;
	case 2: cout << "вторник"; break;
	case 3: cout << "среда"; break;
	case 4: cout << "четверг"; break;
	case 5: cout << "пятница"; break;
	case 6: cout << "суббота"; break;
	case 7: cout << "воскресенье"; break;
	default: cout << "одна ошибка и ты ошибся"; break;

	}
	return 0;
}
