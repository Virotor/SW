#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k, n1, razm = 0;
	cout << "Введите числа n и k" << endl;
	cin >> n >> k;
	n1 = n;
	while (n1 > 0)
	{
		razm++;
		n1 /= 10;
	}
	for (int i = 0; i < (razm - k); i++)
	{
		n /= 10;
	}
	cout << "Число, содержащее первые k цифр числа n: " << n;
	return 0;
}