#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	cout << "*************������� 5*******************" << endl;
	do {
		char random0, random1, random2, random3;

		srand(time(NULL));
		cout << "��������������� ������:" << endl;
		random0 = rand() % 10 + 48;
		random1 = rand() % 10 + 48;
		random2 = rand() % 10 + 48;
		random3 = rand() % 10 + 48;
		cout << random0 << random1 << random2 << random3;

		cout << endl;
		char f, v, b, n;// ���������� � ������� ����� ������������ ������� ����. � ��� ����� �����, ��� ��� �� ������� ��������� � �������������
		for (f = 48; f < 58; f++)
		{

			for (v = 48; v < 58; v++)
			{

				for (b = 48; b < 58; b++)
				{

					for (n = 48; n < 58; n++)
					{
						if (random3 == n)
							break;

					}
					if (random2 == b)
						break;
				}
				if (random1 == v)
					break;

			}
			if (random0 == f)
				break;

		}
		cout << "������ ��������:" << endl;
		cout << f << v << b << n << endl;
		cout << "������� 1, ����� ��������� ������� ������� ��� ���. \n ���� ������� ����� �������,����� ������� � ���������� �������" << endl;
		_getch();
		system("cls");
	} while (_getch() == '1');
	return 0;
}