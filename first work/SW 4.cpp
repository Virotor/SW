#include "pch.h"
#include <iostream>
#include "math.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c, a1, b1;
	cout << "������� ������ ��������� "; cin >> b1;
	cout << "������� ������ ��������� "; cin >> a1;
	cout << "������� ������ ��������������� "; cin >> a;
	cout << "������� ������ ��������������� "; cin >> b;
	cout << "������� ������ ��������������� "; cin >> c;
	if (a > 0 || b > 0 || c > 0 || a1 > 0 || b1 > 0)
	{
		if (c <= b1 && a <= b1 || b <= a1) cout << "��� ��� ��� ��� ��� ��� �������";
		else if (c <= a1 && a <= b1 || b <= b1) cout << "��� ��� ��� ��� ��� ��� �������";
		else if (a <= b1 && a <= a1 || b <= a1) cout << "��� ��� ��� ��� ��� ��� �������";
		else if (a <= a1 && a <= b1 || b <= b1) cout << "��� ��� ��� ��� ��� ��� �������";
		else if (b <= b1 && a <= a1 || b <= a1) cout << "��� ��� ��� ��� ��� ��� �������";
		else if (b <= a1 && a <= b1 || b <= b1) cout << "��� ��� ��� ��� ��� ��� �������";
		else cout << "�� ���� �� ���������";
	}
	else cout << "����� �����";
	
	return 0;
}