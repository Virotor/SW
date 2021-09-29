#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	long long int number;
	cout << "¬ведите число ";
	cin >> number;
	number = abs(number);
	while (number)
	{
		cout << number % 10 << endl;
		number /= 10;
	}
	return 0;
}