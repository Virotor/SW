#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	cout << "*************������� 2*******************" << endl;
	do {
		int day_number;
		cout << "������� ����� ��� ������" << endl;
		cin >> day_number;
		if (day_number > 7 || day_number < 1)
			cout << "����� ��� ������ �������" << endl;
		else switch (day_number)
		{
		case 1: {
			cout << "�����������" << endl;
			break; }
		case 2: {
			cout << "�������" << endl;
			break; }
		case 3: {
			cout << "�����" << endl;
			break; }
		case 4: {
			cout << "�������" << endl;
			break; }
		case 5: {
			cout << "�������" << endl;
			break; }
		case 6: {
			cout << "�������" << endl;
			break; }
		case 7: {
			cout << "�����������" << endl;
			break; }
		}
		cout << "������� 1, ����� ��������� ������� ������� ��� ���. \n ���� ������� ����� �������,����� ������� � ���������� �������" << endl;
		_getch();
		system("cls");
	} while (_getch() == '1');
}