#include<iostream>
#include<math.h>
#include<string>
#include<windows.h>
#include<stdlib.h>
using namespace std;

int main()
{
	double x, y, a, b, c;
	cout << "������� ����� � ������ ���������� :" << endl;
	cin >> x >> y;
	cout << "������� �����, ������ � ������ ���������������: " << endl;
	cin >> a >> b >> c;
	if (a < x && b < y || a < x && c < y || b < x && c < y || a < y && b < x || a < y && c < x || b < y && c < x)
	{
		cout << "�������������� �������� �������� � ����������" << endl;
	}
	else cout << "�������������� ����� �� �������� � ����������" << endl;
	return 0;
}