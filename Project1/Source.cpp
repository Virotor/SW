#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	char ch;
	cout << "������� ����� �������: ";
	ch=_getch();
	switch (ch)
	{
	case '1':
		cout << "������� ����� �����: ";
		int a;
		cin >> a;
		double b, x, c, z, y;
		b = (double)a / 10;
		x = a / 10;
		c = (b - x) * 10;
		z = (a / 100);
		y = x - z * 10;
		cout << z << endl;
		cout << y << endl;
		cout << c << endl;
		break;
	case '2':
		cout << "������� ����� ��� ������: ";
		int day;
		cin >> day;
		switch (day)
		{
		case 1:cout << "�����������"; break;
		case 2:cout << "�������"; break;
		case 3:cout << "�����"; break;
		case 4:cout << "�������"; break;
		case 5:cout << "�������"; break;
		case 6:cout << "�������"; break;
		case 7:cout << "�����������"; break;
		default: cout << "��� ������ ���"; break;
		}
		break;
	}









}