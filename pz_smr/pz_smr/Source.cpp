#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	int number;

	cout << "Number = ";
	cin >> number;

	string str = to_string(number);

	for (int i = 0; i <= str.length(); i++)
	{
		cout << str[i] << endl;
	}

	int numberOfDay;

	cout << "Number of day = ";
	cin >> numberOfDay;

	switch (numberOfDay)
	{
	case 1: cout << "Monday" << endl;
		break;

	case 2: cout << "Thuestay" << endl;
		break;

	case 3: cout << "Wednesday" << endl;
		break;

	case 4: cout << "Thursday" << endl;
		break;

	case 5: cout << "Friday" << endl;
		break;

	case 6: cout << "Saturday" << endl;
		break;

	case 7: cout << "Sunday" << endl;
		break;

	default: cout << "Wrong number of day" << endl;
	}
}