#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Vvedite chislo: ";
	cin >> a;
	for (b = 0; a > b; a /= 10)
	{
		c = a % 10;
		cout << c << endl;
	}
	return 0;
}

int zadanie2()
{
	int y;
	cin >> y;
		switch (y)
		{
		case 1: cout << "�����������" << endl; break;
		case 2: cout << "�������" << endl; break;
		case 3: cout << "�����" << endl; break;
		case 4: cout << "�������" << endl; break;
		case 5: cout << "�������" << endl; break;
		case 6: cout << "�������" << endl; break;
		case 7: cout << "�����������" << endl; break;
		default: cout << "������: �������� �����." << endl;
		}
	return 0;
}
