#include "pch.h"
#include <iostream>
#include "math.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int n;// n �� ����� number
	cout << "������� ����� "; cin >> n;
	switch (n)
	{
	case 1: cout << "�����������"; break;
	case 2: cout << "�������"; break;
	case 3: cout << "�����"; break;
	case 4: cout << "�������"; break;
	case 5: cout << "�������"; break;
	case 6: cout << "�������"; break;
	case 7: cout << "�����������"; break;
	default: cout << "���� ������ � �� ������"; break;

	}
	return 0;
}
