#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int k;
	string n;
	cout << "Enter n" << endl;
	cin >> n;
	cout << "Enter k" << endl;
	cin >> k;
	if (!cin)
	{
		cout << "It's not a number" << endl;
	}
	int x;//переменная в которой хранится введенное число n
	switch ((n.length() - k))
	{
	case 1:
		x = atoi(n.c_str()) / 10;
		cout << x << endl;
		break;
	case 2:
		x = atoi(n.c_str()) / 100;
		cout << x << endl;
		break;
	case 3:
		x = atoi(n.c_str()) / 1000;
		cout << x << endl;
		break;
	case 4:
		x = atoi(n.c_str()) / 10000;
		cout << x << endl;
		break;
	case 5:
		x = atoi(n.c_str()) / 100000;
		cout << x << endl;
		break;
	case 6:
		x = atoi(n.c_str()) / 1000000;
		cout << x << endl;
		break;
	case 7:
		x = atoi(n.c_str()) / 10000000;
		cout << x << endl;
		break;
	case 8:
		x = atoi(n.c_str()) / 100000000;
		cout << x << endl;
		break;
	case 9:
		x = atoi(n.c_str()) / 1000000000;
		cout << x << endl;
		break;
	case 10:
		x = atoi(n.c_str()) / 10000000000;
		cout << x << endl;
		break;
	}
}