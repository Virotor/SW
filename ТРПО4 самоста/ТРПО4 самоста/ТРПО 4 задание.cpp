#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, h, l, s;
	cout << "Vvedite dlinnu=";
	cin >> a;
	cout << "Vvedite shirinu=";
	cin >> b;
	cout << "Vvedite visotu=";
	cin >> h;
	cout << "Vvedite dlinu otverstiya=";
	cin >> l;
	cout << "Vvedite shirinu otverstiya=";
	cin >> s;
	if ((a <= l) && (b <= s))
	{
		cout << "Proidet cheres osnovanie" << endl;
	}
	else
	{
		if ((a <= s) && (b <= l))
		{
			cout << "Proidet cheres otverstie" << endl;
		}
		else
		{
			if (((h <= s) || (h <= l)) && ((a <= s) || (a <= l)))
			{
				cout << "Proidet cheres otverstie" << endl;
			}
			else
			{
				if ((h <= s) || (h <= l) && ((b <= s) || (b <= l)))
				{
					cout << "Proidet v otverstie" << endl;
				}
				else
				{
					cout << "Ne proidet v otverstie" << endl;
				}
			}
		}
	}
}