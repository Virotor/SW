#include "pch.h"
#include <iostream>
#include "math.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int vis_P, sh_P, vis, sh;
	cout << "������� ������ ��������� "; cin >> sh;
	cout << "������� ������ ��������� "; cin >> vis;
	cout << "������� ������ ��������������� "; cin >> sh_P;
	cout << "������� ������ ��������������� "; cin >> vis_P;
	if ((vis>=vis_P) || (sh>=sh_P)) 
	{
		cout << "������ ������ ��������";
	}
		else cout << "����� �� ����� ���� �� �� ���";
	return 0;
}