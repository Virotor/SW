#include <string>
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	string n;
	int k;
	cout << "Введите число n: ";
	cin >> n;
	cout << "Введите число k: ";
	cin >> k;
	if (k <= size(n))
	{
		for (int i = 0; i < k; i++)
		{
			cout << n[i];
		}
	}
	else cout << "Число k превышает количество цифр n";
	return 0;
}