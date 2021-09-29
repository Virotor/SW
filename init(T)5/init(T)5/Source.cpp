#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int firstNum, secNum, triNum, fourNum;

	srand(time(NULL));


	firstNum = rand() % 10;
	secNum = rand() % 10;
	triNum = rand() % 10;
	fourNum = rand() % 10;
	cout << "Pass= " << firstNum << " " << secNum << " " << triNum << " " << fourNum << endl;
	int i = 0;
	int j = 0;
	int p = 0;
	int q = 0;

	do
	{

		do
		{

			do
			{

				do
				{
					if (q == fourNum)
					{
						break;
					}
					q++;


				} while (fourNum != q);
				if (p == triNum)
				{
					break;
				}
				p++;
			} while (triNum != p);

			if (j == secNum)
			{
				break;
			}
			j++;
		} while (secNum != j);
		if (i == firstNum)
		{
			break;
		}
		i++;
	} while (firstNum != i);

	cout << " pass2=" << i << " " << j << " " << p << " " << q << endl;
	return 0;
}