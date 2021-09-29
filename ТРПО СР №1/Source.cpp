#include<iostream>
#include<math.h>

using namespace std;

int main()
{	
	cout << "\n-----------PROGRAM#1-----------------------------------------------------------------\n";
	long double number, factor = 1 ;
	do //proverka
	{
		cout << "\n\tEnter positive, preferably int number: ";
		cin >> number;
		
	} while ( number<= 0  or trunc(number) < number);

	while (factor < number/10) factor *= 10;

	while (factor >= 1)
	{
		cout<< "\t" << (int)(number / factor) << endl;
		number -= (int)(number / factor)*factor;
		factor /= 10;
	}

	cout << "\n-----------PROGRAM#2-----------------------------------------------------------------\n";

	int day;
	cout << "\n\tEnter the number of weekday: ";
	cin >> day;
	switch (day)
	{
	case 1:cout << "\tMonday" << endl; break;
	case 2:cout << "\tTuesday" << endl; break;
	case 3:cout << "\tWednesday" << endl; break;
	case 4:cout << "\tThursday" << endl; break;
	case 5:cout << "\tFriday" << endl; break;
	case 6:cout << "\tSaturday" << endl; break;
	case 7:cout << "\tSunday" << endl; break;
	default: cout << "Incorrect number...";
	}

}