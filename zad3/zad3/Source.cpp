#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "¬ведите два числа n и k: ";
	long long int n, k;
	cin >> n >> k;
	int nKopiya, nachalnoe;
	nKopiya = n;
	for (nachalnoe = 0; nKopiya > 0; nachalnoe++)
	{
		nKopiya /= 10;
	}
	nachalnoe -= k;
	int nachalnoe2;
	for (nachalnoe2 = nachalnoe; nachalnoe2 > 0; nachalnoe2--)
	{
		n /= 10;
	}
	cout << "ѕервые цифры числа: " << n << endl;
	system("pause");
	return 0;
}