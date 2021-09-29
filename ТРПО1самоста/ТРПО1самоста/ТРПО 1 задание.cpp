#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int f;
	cout << "Vvedite chislo" << endl;
	cin >> f;
	int del = 1;
	while ((f / del) >= 1)
	{
		del = del * 10;
	}
	del = del / 10;
	while (del >= 1)
	{
		cout << (f/ del) % 10 << endl;
		del = del / 10;
	}
	return 0;
}