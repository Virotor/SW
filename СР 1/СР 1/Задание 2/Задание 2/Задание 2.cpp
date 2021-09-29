#include <iostream>

using namespace std;
int main()
{
	int day;
	cout << "Enter number of the day"<< endl;
	cin >> day;
	switch (day)
	{
	case 1:
		cout << "monday";
		break;
	case 2:
		cout << "tuesday";
		break;
	case 3:
		cout << "wednesday";
		break;
	case 4:
		cout << "thursday";
		break;
	case 5:
		cout << "friday";
		break;
	case 6:
		cout << "saturday";
		break;
	case 7:
		cout << "sunday";
		break;
	default:
		cout << "error";
		break;
	     }
	}