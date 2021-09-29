#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(0, "rus");
	string a;
	cout << "Введите число " << endl;
	cin >> a;
	for (int b = 0; b < size(a); b++)
		cout << a[b] << endl;
	return 0;
}

