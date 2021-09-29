#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string s;
	cout << "Введите номер = ";
	cin >> s;
	for (int i = 0; i < size(s); i++)
		cout << s[i] << endl;
	return 0;
}