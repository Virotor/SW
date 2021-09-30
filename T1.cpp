#include<iostream>
#include<math.h>
#include<string>
#include<windows.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int chislo;
	cin >> chislo;
	while (chislo)
	{
		cout << chislo % 10 << endl;
		chislo /= 10;
	}
	return 0;
}