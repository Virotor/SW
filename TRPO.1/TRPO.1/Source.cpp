#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	do {

		cout << "*************������� 1*******************" << endl;
		int i;
		string string1;

		cout << "������� �����" << endl;
		getline(cin, string1);
		int length;
		length = string1.length();
		for (i = 0; i < length; i++)
		{
			cout << string1[i] << endl;
		}
		cout << "������� 1, ����� ��������� ������� ������� ��� ���. \n ���� ������� ����� �������,����� ������� � ���������� �������" << endl;
		_getch();
		system("cls");
	} while (_getch() == '1');
}