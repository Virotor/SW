#include<iostream>
#include<stdio.h>
#include<locale.h>

using namespace std;

int main() 
{
	int x;
	setlocale(LC_ALL, "Rus");
	cout << "������� ����� ��� " << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "�����������\n";
		break;
	case 2:
		cout << "�������\n";
		break;
	case 3:
		cout << "�����\n";
		break;
	case 4:
		cout << "�������\n";
		break;
	case 5:
		cout << "�������\n";
		break;
	case 6:
		cout << "�������\n";
		break;
	case 7:
		cout << "�����������\n";
		break;
	default:
		cout << "�� ����� �������� ����� ���\n";
		break;
	}
	system("pause");
	return 0;
}