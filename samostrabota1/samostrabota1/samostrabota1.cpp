#include<iostream>
#include<conio.h>

using namespace std;

int zadanie1()
{
	int n;

	cout << "\nInput n: " << endl;
	cin >> n;
	cout << "\n";

	for (int i = pow(10, int(log10(n)));i != 0; i /= 10)
		cout << n / i % 10 << "\n";

	return 0;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Enter the number of exercise:" << endl;

	switch (_getch())
	{
	case'1':zadanie1();break;
	}
}