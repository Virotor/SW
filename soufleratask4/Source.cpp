#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	double heightOdin, lenghtOdin, widthOdin, heightDva, lenghtDva, widthDva;
	cout << "������� �����, ������ � ������ ���������������: " << endl;
	cin >> lenghtOdin >> widthOdin >> heightOdin;
	cout << "������� �����, ������ � ������ ���������: " << endl;
	cin >> lenghtDva >> widthDva >> heightDva;

	double figura[3] = { lenghtOdin, widthOdin, heightOdin };
	double otverstie[3] = { lenghtDva, widthDva, heightDva };

	sort(figura, figura + 3);
	sort(otverstie, otverstie + 3);

	if (figura[0] <= otverstie[0] && figura[1] <= otverstie[1] && figura[2] <= otverstie[2])
	{
		cout << "������";
	}
	else
	{
		cout << "�� ������";
	}
	return(0);
}