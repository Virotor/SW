
#include <math.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	//3 задание 
	setlocale(LC_ALL, "Rus");
	int n, k;
	cout << "Введите число" << endl;
	cin >> n;
	cout << "Введите количество первых чисел, которые нужно вернуть" << endl;
	cin >> k;
	k = to_string(n).length() - k;
	n /= pow(10, k);
	cout << n << endl;

	system("pause");
	return 0;
}

