#include <iostream>
#include <cmath>
#include <conio.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	srand((unsigned int)time(0));

	system("cls");
	int i; 

	char randomPass[4];
	for (i = 0; i < 4; i++)
		randomPass[i] = (char)(48 + rand() % ((57 + 1) - 48));
	for (i = 0; i < 4; i++)
		cout << randomPass[i] ;
	cout << endl;

	char iskomiPass[4] = { '0','0','0','0' };

	for (char dlyaSravnenija = '0', i = 0; dlyaSravnenija <= '9'; dlyaSravnenija++)
		if (dlyaSravnenija == randomPass[i])
		{
			iskomiPass[i++] = dlyaSravnenija;
			dlyaSravnenija = '0' - 1;
			continue;
		}

	for (i = 0; i < 4; i++)
		cout << iskomiPass[i];
	cout << "\n Password Podobran. The End.";

	return 0;
}