#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, d, f;
	cout << "������� �����(a): ";
	cin >> a;
	cout << "������� ������(b):  ";
	cin >> b;
	cout << "������� ������(c): ";
	cin >> c;
	cout << "������� ������ ���������(d): ";
	cin >> d;
	cout << "������� ������ ���������(f): ";
	cin >> f;
	switch ((b <= d) && (c <= f) ? 1 : (a <= d) && (c <= f) ? 2 : (a <= d) && (b <= f) ? 3 : -1)
	{
	case 1: {cout << "�������������� ������ ����� ��������� �� ������ � ������" << endl; break; }
	case 2: {cout << "�������������� ������ ����� ��������� �� ������ � ������" << endl; break; }
	case 3: {cout << "�������������� ������ ����� ��������� �� ������ � ������" << endl; break; }
	default: cout << "�������������� �� ������ ����� ���������" << endl;
	}
	return 0;
}