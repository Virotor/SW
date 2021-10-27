#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int k;
	string n;
	cout << "Введите n" << endl;
	cin >> n;
	cout << "Введите k" << endl;
	cin >> k;
	if (k <= size(n))
	{
		for (int i = 0; i < k;i++)
		{
			cout << n[i];
		}
	}
	else cout << "Не верно";
	return 0;
}