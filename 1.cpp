#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� �����: ";
	 long long int celoeChislo;
	cin >> celoeChislo;
	if (celoeChislo < 10 and celoeChislo > -10)
		cout << "����� ������� �����: " << celoeChislo << endl;
	else {
		cout << "����� ������� �����: " << endl;
		while (celoeChislo > 1 or celoeChislo < -1)
		{
			int ostatok;
			ostatok = celoeChislo % 10;
			celoeChislo = celoeChislo / 10;
			cout << ostatok << endl;
		}
	}
	system("pause");
	return 0;
}