#include <iostream>
using namespace std;

int main()
{
	int unsigned;
	setlocale(LC_ALL, "RUS");
	srand((unsigned)time(0));
	int a[4], i, j;
	//char b[4]
	int upper_limit = 9, lower_limit = 0;
	for (i = 0; i <= 3; i++)
	{
		a[i] = lower_limit + rand() % ((upper_limit + 1) - lower_limit);
	}
	cout << "Пароль сгенерирован" << endl;
	for (i = 0; i <= 3; i++)
	{
		cout << a[i]<<endl;
	}
	j = 1; i = 1;
	cout << "Пароль подобран:" << endl;
	for (i=0; i <=4; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[i] == j)
			{
				cout << j;
			}
		}
	};
	return 0;
}
