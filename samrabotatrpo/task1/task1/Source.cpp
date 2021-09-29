#include <iostream>
using namespace std;
int main() {
	setlocale (LC_ALL, "rus");
	string a;
	cout << "введите число= ";
	cin >> a;
	for (int b = 0; b < a.length(); b++)
	{
		cout << a[b] << "\n";
	}
	return 0;
}