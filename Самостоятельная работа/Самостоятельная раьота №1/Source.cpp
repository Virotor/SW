#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "������� ����� ��� ������" << endl;
	cin >> n;
	switch (n)
	{
	case 1:
	{
		cout << "�����������" << endl;
		break;
	}
	case 2:
	{
		cout << "�������" << endl;
		break;
	}
	case 3:
	{
		cout << "�����" << endl;
		break;
	}
	case 4:
	{
		cout << "�������" << endl;
		break;
	}
	case 5:
	{
		cout << "�������" << endl;
		break;
	}
	case 6:
	{
		cout << "�������" << endl;
		break;
	}
	case 7:
	{
		cout << "�����������" << endl;
		break;
	}
	default:
	{
		cout << "������ ������������ ����� ��� ������" << endl;
		break;
	}

	
	}
}