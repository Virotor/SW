#include <iostream>
#include<cmath>
#include<string>
#include <random>

using namespace std;

 int main()
{	
	setlocale(LC_ALL, "ru");
	int day;                                      //2 задание
	cout << "Enter the day of the week: ";
	cin >> day;
	switch (day)
	{
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	case 7:
		cout << "Sunday" << endl;
		break;
	default:
		cout << "There is no such day of the week!" << endl;
		break;
	}

	system("pause");
}
