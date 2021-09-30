#include<iostream>
#include<conio.h>
#include<sstream>
#include<math.h>

using namespace std;

int zadanie1()
{
	int n;

	cout << "\nInput n: " << endl;
	cin >> n;
	cout << "\n";

	for (int i = pow(10, int(log10(n)));i != 0; i /= 10)
		cout << n / i % 10 << "\n";

	return 0;
}

int zadanie2()
{
	int number;

	cout << "\nInput the day of the week:" << endl;
	cin >> number;

	switch (number)
	{
	case 1:cout << "\nMonday\n";break;
	case 2:cout << "\nTuesday\n";break;
	case 3:cout << "\nWednesday\n";break;
	case 4:cout << "\nThursday\n";break;
	case 5:cout << "\nFriday\n";break;
	case 6:cout << "\nSaturday\n";break;
	case 7:cout << "\nSunday\n";break;
	default:cout << "\nThere is no such day of the week\n" << endl;
	}

	return 0;
}

int zadanie3()
{
	int n, k, N = 0;
	stringstream ss;

	cout << "\nInput n and k:" << endl;
	cin >> n >> k;
	ss << n;

	cout << "\n";
	while (N != k)
	{
		cout << ss.str()[N];
		N++;
	}
	cout << "\n";

	return 0;
}

int zadanie4()
{
	int a1, b1, c1, a2, b2;

	cout << "\nInput length, width and height of the parallelepiped:" << endl;
	cin >> a1 >> b1 >> c1;

	cout << "\nInput length and width of the hole:" << endl;
	cin >> a2 >> b2;

	if (a1 <= a2 && c1 <= b2)
		cout << "\nThe parallelepiped will go through the hole" << endl;
	else
	{
		if (c1 <= a2 && a1 <= b2)
			cout << "\nThe parallelepiped will go through the hole" << endl;
		else
		{
			if (c1 <= a2 && b1 <= b2)
				cout << "\nThe parallelepiped will go through the hole" << endl;
			else
			{
				if (b1 <= a2 && c1 <= b2)
					cout << "\nThe parallelepiped will go through the hole" << endl;
				else
				{
					if (a1 <= a2 && b1 <= b2)
						cout << "\nThe parallelepiped will go through the hole" << endl;
					else
					{
						if (b1 <= a2 && a1 <= b2)
							cout << "\nThe parallelepiped will go through the hole" << endl;
						else
						{
							if (sqrt(pow(a1, 2) + pow(b1, 2)) <= sqrt(pow(a2, 2) + pow(b2, 2)) && c1 <= b2)
								cout << "\nThe parallelepiped will go through the hole" << endl;
							else
							{
								if (sqrt(pow(a1, 2) + pow(b1, 2)) <= sqrt(pow(a2, 2) + pow(b2, 2)) && c1 <= a2)
									cout << "\nThe parallelepiped will go through the hole" << endl;
								else
									cout << "\nThe parallelepiped won't go through the hole" << endl;
							}
						}
					}
				}
			}
		}
	}

	return 0;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Enter the number of exercise:" << endl;

	switch (_getch())
	{
	case'1':zadanie1();break;
	case'2':zadanie2();break;
	case'3':zadanie3();break;
	case'4':zadanie4();break;
	}
}