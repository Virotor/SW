#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int day;
	setlocale(LC_ALL, "RUS");
	cout << "Vvedite den nedeli:";
	cin >> day;
	switch (day)
	{
	case 1: {
		cout << "Monday";
		break;
	}
	case 2: {
		cout << "Tuesday";
		break;
	}
	case 3: {
		cout << "Wednesday";
		break;
	}
	case 4: {
		cout << "Thursday";
		break;
	}
	case 5: {
		cout << "Friday";
		break;
	}
	case 6: {
		cout << "Saturday";
		break;
	}
	case 7: {
		cout << "Sunday";
	}
	default:
		cout << "Net dna nedeli s takim nomerom!";
		break;
	}
}