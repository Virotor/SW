#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int numK, numN;
	cout << "Введите число n: ";
	cin >> numN;
	cout << "Введите число k: ";
	cin >> numK;
	int delitelNumn = 1;
	while ((numN / delitelNumn) >= 1)
	{
		delitelNumn *= 10;
	}
	delitelNumn /= 10;
	while (numK >= 1)
	{
		cout << (numN / delitelNumn) % 10;
		delitelNumn /= 10;
		numK--;
	}
	return 0;
}
