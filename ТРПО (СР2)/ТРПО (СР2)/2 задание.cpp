#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int RandPass[4];
	int Answer[4];
	for (int i = 0; i < 4; i++)
	{
		RandPass[i] = rand() % 10;
	}

	for (int i = 0; i < 4; i++)
	{
		for (int a = 0; a < 10; a++)
		{
			if (RandPass[i] == a)
			{
				Answer[i] = RandPass[i];
				break;
			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cout << Answer[i] << endl;
	}
}