#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	//ЗАДАНИЕ №3
	long long int n, clone;
	int  k, i, j;

	cout << "Введите числа n и k: " << endl;
	cin >> n >> k;
	clone = n;
	for (i = 0; n > 0; i++)
	{
		n /= 10;
	}
	i -= k;
	for (j = i; j > 0; j--)
	{
		clone /= 10;
	}
	cout << clone << endl;
	return 0;
}