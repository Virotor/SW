#include <string>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string n;
	int k;
	cout << "������� n: ";
	cin >> n;
	cout << "������� k: ";
	cin >> k;
	cout << " ����� ��������?\n ";
	cin >> k;
	cout << n.substr(0, k);
	_getch();
	return 0;
}