#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
cout << "*************������� 3*******************" << endl;
do {

	long long int k, i, j, stepen, n, NikitaDuko;


	cout << "������� k � n" << endl;

	cin >> k >> n;


	for (i = 0;; ++i)
	{
		NikitaDuko = n / pow(10, i);//NikitaDuko-��������������� ����������
		if (NikitaDuko == 0) {

			break;
		}


	}
	stepen = i - k;

	int conch;//conch - �������� �����
	if (stepen < 0)
		cout << "���� � ����� ������, ��� �������� k" << endl;
	else {
		conch = n / pow(10, stepen);
		cout << conch << endl;
	}
	cout << "������� 1, ����� ��������� ������� ������� ��� ���. \n ���� ������� ����� �������,����� ������� � ���������� �������" << endl;
	_getch();
	system("cls");
} while (_getch() == '1');
}