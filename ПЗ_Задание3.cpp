#include <string>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, k;
	setlocale(LC_ALL, "Russian");
	     cout << "Введите число n:"; cin >> n;
	     cout << "Введите число k:"; cin >> k;
	k = to_string(n).length() - k;
	n /= pow(10, k);
	cout << n << "\n";

	return 0;
}
