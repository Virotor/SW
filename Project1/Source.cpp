#include<iostream>
#include<conio.h>
#include<math.h>
#include<sstream>
#include <cstdlib>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	char ch;
	int n, k, i = 0;
	stringstream dd;
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

	case'3':
		cout << "������� ��� ����� ����� n � k: ";
		cin >> n >> k;
		dd << n;
		while (i != k)
		{
			cout << dd.str()[i];
			i++;
		}
		break;
	case '4':
		setlocale(LC_ALL, "rus");
		int x1, x2, x3, y1, y2, y3;
		cout << "������� ������� ��������� : ������ : "; cin >> y1;
		cout << "������� ������� ��������� : ������ : "; cin >> y2;
		cout << "������� ������� ��������� : ������ : "; cin >> y3;
		cout << "������� ������� ��������������� : ������ : "; cin >> x1;
		cout << "������� ������� ��������������� : ������ : "; cin >> x2;
		cout << "������� ������� ��������������� : ������ : "; cin >> x3;
		if (y1 == x1 || y1 < x1 || y1 > x1)
		{
			if (y1 == x1)cout << "������ �������\n";
			if (y1 < x1)cout << "������ ��������� �� ������ ������ ������ ���������������\n";
			if (y1 > x1)cout << "������ ��������� �� ������ ������ ������ ���������������\n";
		}
		if (y2 == x2 || y2 < x2 || y2 > x2)
		{
			if (y2 == x2)cout << "����� �������\n";
			if (y2 < x2)cout << "������ ��������� �� ����� ������ ����� ���������������\n";
			if (y2 > x2)cout << "������ ��������� �� ����� ������ ����� ���������������\n";
		}
		if (y3 == x3 || y3 < x3 || y3 > x3)
		{
			if (y3 == x3)cout << "������ �������\n";
			if (y3 < x3)cout << "������ ��������� �� ������ ������ ������ ���������������\n";
			if (y3 > x3)cout << "������ ��������� �� ������ ������ ������ ���������������\n";
		}
		break;
	case'5':
	{
		int ran1, ran2, ran3, ran4;
		ran1 = rand() % 10;
		ran2 = rand() % 10;
		ran3 = rand() % 10;
		ran4 = rand() % 10;
		cout << "������������ ���: " << ran1 << ran2 << ran3 << ran4;
		cout << endl;
		for (int i = 0; i < 9; i++)
		{
			if (i == ran4)

			{
				for (int j = 0; j < 9; j++)
				{
					if (j == ran3)
					{
						for (int k = 0; k < 9; k++)
							if (k == ran2)
							{
								{
									for (int v = 0; v < 9; v++)
										if (v == ran1)
										{
											{

												cout << "��� ������ " << v << k << j << i;

											}
										}
								}

							}
					}
				}
			}

		}
	}
	break;
	default:cout << "������ �����" << endl;
	}
	return 0;
}