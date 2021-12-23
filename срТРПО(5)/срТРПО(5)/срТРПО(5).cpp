#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	char numA = rand() % 10 + 48;
	char numB = rand() % 10 + 48;
	char numC = rand() % 10 + 48;
	char numD = rand() % 10 + 48;

	cout << "Пароль сгенерирован: **** \n";
	cout << "Пароль, угаданный компьютером: ";

	for (int i = 0; i <= numA; i++)
	{
		if (i == numA)
		{
			cout << numA;
		}
	}
	for (int i = 0; i <= numB; i++)
	{
		if (i == numB)
		{
			cout << numB;
		}
	}
	for (int i = 0; i <= numC; i++)
	{
		if (i == numC)
		{
			cout << numC;
		}
	}
	for (int i = 0; i <= numD; i++)
	{
		if (i == numD)
		{
			cout << numD;
		}
	}
	return 0;
}