#include <iostream>
#include <math.h>
using namespace std;
int main() {
// 4 �������
	setlocale(LC_ALL, "RUS");
	double length, width, height, r;
	int �;
	cout << "������� ������ ��������� - "; cin >> r;
	cout << "������� ����� ��������������� - "; cin >> length;
	cout << "������� ������ ��������������� - "; cin >> width;
	cout << "������� ������ ��������������� - "; cin >> height;
	if (((pow(length * length + width * width, 0.5)) <= r * 2) || ((pow(height * height + width * width, 0.5)) <= r * 2) || ((pow(length * length + height * height, 0.5)) <= r * 2)) {
		� = 0;
	}
	else {
		� = 1;
	}
	switch (�) {
	case 0:
		cout << "�������������� ������ � ���������" << endl;
		break;
	case 1:
		cout << "�������������� �� ������ � ���������" << endl;
		break;
	}
	return 0;
}