#include <iostream>
#include <string>
using namespace std;

int three ()
{
	setlocale(0, "rus");
	string n;
	int k;
	cout << " n: ";
	cin >> n;
	cout << " k: ";
	cin >> k;
	if (k <= size(n))
	{
		for (int i = 0; i < k; i++) {

			cout << n[i];
		}
	}
	else cout << "Число k больше чем  количество цифр n";
	return 0;
}