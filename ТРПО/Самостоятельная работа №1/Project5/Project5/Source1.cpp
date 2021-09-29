#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	int a = rand() % 10 + 0;
	int b = rand() % 10 + 0;
	int c = rand() % 10 + 0;
	int d = rand() % 10 + 0;

	cout << "Пароль сгенерирован: **** \n";

	cout << "Компьютер угадал: ";
	for (int i = 0; i <= a; i++)
	{
		if (i == a)
		{
			cout << a;
		}
	}
	for (int i = 0; i <= b; i++)
	{
		if (i == b)
		{
			cout << " " << b;
		}
	}
	for (int i = 0; i <= c; i++)
	{
		if (i == c)
		{
			cout << " " << c;
		}
	}
	for (int i = 0; i <= d; i++)
	{
		if (i == d)
		{
			cout << " " << d;
		}
	}

	return 0;
}
