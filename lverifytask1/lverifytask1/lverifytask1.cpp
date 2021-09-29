#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	long long int chislo;
	int ostatok;
	cout << endl << "введите пожалуйста число" << endl;
	cin >> chislo;
	chislo = abs(chislo);
	while (chislo >= 1)
	{
		ostatok = chislo % 10;
		cout << ostatok << endl;
		chislo = chislo / 10;
	}
	return(0);
}

