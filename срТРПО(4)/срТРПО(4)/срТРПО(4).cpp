#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, c, d, e;

	cout << "����� ���������:";            cin >> a;

	cout << "������ ���������:";           cin >> b;

	cout << "����� ���������������:";      cin >> c;

	cout << "������ ���������������:";     cin >> d;

	cout << "������ ���������������:";     cin >> e;

	if (a < c || b < e)

		cout << "�������� ����� ��������� ���������";
	else cout << "�� �������� ����� ��������� ���������";

	return 0;
}