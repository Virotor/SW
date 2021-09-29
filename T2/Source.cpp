#include <iostream>;

using namespace std;

int main()
{
	short inputValue;
	cout << "Enter day's number (from 1 to 7): "; cin >> inputValue;
	while (inputValue > 7 || inputValue < 1)
	{
		cout << "\n!!!Invalid number, enter it again: "; cin >> inputValue;
	}
	switch (inputValue)
	{
	case 1: cout << "\nYour day is Monday."; break;
	case 2: cout << "\nYour day is Tueseday"; break;
	case 3: cout << "\nYour day is Wednesday"; break;
	case 4: cout << "\nYour day is Thursday"; break;
	case 5: cout << "\nYour day is Friday"; break;
	case 6: cout << "\nYour day is Saturday"; break;
	case 7: cout << "\nYour day is Sunday"; break;
	}
	return 0;
}