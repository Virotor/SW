#include<iostream>
#include<math.h>

using namespace std;

int main()
{	
	cout << "\n-----------PROGRAM#1-----------------------------------------------------------------\n";
	int factor = 1;
	double number;
	do //proverka
	{
		cout << "\n\tEnter positive, preferably int number: ";
		cin >> number;
		
	} while ( number<= 0  or trunc(number) < number);

	while (factor < number/10) factor *= 10;
	while (factor >= 1)
	{
		cout << "\t" << (int)number / factor << endl;
		number -= (double)((int)number / factor)*factor;
		factor /= 10;
	}





}