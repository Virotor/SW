#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	int shirotaOtv, dlinaOtv, visotaParal, dlinaParal, shirinaParal, glubinaOtv;
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� ��������� : ";
	cin >> dlinaOtv;
	cout << "������� ������ ��������� : ";
	cin >> shirotaOtv;
	cout << "������� ������� ��������� : ";
	cin >> glubinaOtv;
	cout << "������� ����� ��������������� : ";
	cin >> dlinaParal;
	cout << "������� ������ ��������������� : ";
	cin >> shirinaParal;
	cout << "������� ������ ��������������� : ";
	cin >> visotaParal;
	if (((glubinaOtv>=shirinaParal) and (dlinaOtv>=dlinaParal) and (shirotaOtv>=visotaParal)) || ((glubinaOtv>=shirinaParal) and (dlinaOtv>=visotaParal) and (shirotaOtv>=dlinaParal)))
	{
		cout << "�������\n";
	}
	else
	{
		cout << "�� �������\n";
	}
return 0;
}
