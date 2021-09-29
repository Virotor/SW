#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int tseloeNum;
	cout << "Введите число: \n";
	cin >> tseloeNum;
	int delitelNum = 1;
	while ((tseloeNum / delitelNum) >= 1)
	{
		delitelNum *= 10;
	}
	delitelNum /= 10;
	while (delitelNum >= 1)
	{
		cout << (tseloeNum / delitelNum) % 10 << endl;
		delitelNum /= 10;
	}
	return 0;
}