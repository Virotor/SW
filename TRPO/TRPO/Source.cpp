#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int num;
	cout << "������� �����\n"; cin >> num;
	while (num)
	{
		cout << num % 10 << endl;
		num /= 10;
	}
	system("pause");



int day;
	cout << "������� ����� ��� ������\n"; cin >> day;
	switch (day)
	{
	case(1):
		cout << "�����������\n";
		break;
	case(2):
		cout << "�������\n";
		break;
	case(3):
		cout << "�����\n";
		break;
	case(4):
		cout << "�������\n";
		break;
	case(5):
		cout << "�������\n";
		break;
	case(6):
		cout << "�������\n";
		break;
	case(7):
		cout << "�����������\n";
		break;
	default:
		cout << "������ ��� ������ ���" << endl;
	}
	return 0;
}