#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number, a, c, count, b;
	cout << "Enter a number: ";
	cin >> number;

	number = fabs(number);
	a = number;
	for (count = 0; a > 0; count++)
	{
		a = a / 10;
	}
	for (b = count; number > 0; count--)
	{
		c = number / pow(10, (count - 1));
		number = number - c * pow(10, count - 1);
		cout << c << "\n";
	}
	return 0;
}