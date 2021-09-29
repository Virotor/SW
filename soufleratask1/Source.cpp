#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	long long int a;
	int ost;
	cout << endl << "¬ведите число: " << endl;
	cin >> a;
	a = abs(a);
	while (a >= 1)
	{
		ost = a % 10;
		cout << ost << endl;
		a = a / 10;
	}
	return(0);
}