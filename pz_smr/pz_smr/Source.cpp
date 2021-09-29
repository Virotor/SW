#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	int number;

	cout << "Number = ";
	cin >> number;

	string str = to_string(number);

	for (int i = 0; i <= str.length(); i++)
	{
		cout << str[i] << endl;
	}
}