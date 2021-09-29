#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int num, size;
	char ch;
	string str;
	cout << "Введите целое число" << endl;
	cin >> num;
	while (num > 0)
	{
		ch = num % 10 + 48;
		str += ch;
		num /= 10;
	}
	size = str.size();
	for (int i = size - 1; i >= 0; i--)
	{
		cout << str[i] << endl;
	}
	return 0;
}