#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian"); 
	int a;
	cout << "Введи число\n";
	cin >> a;
	while (true)
	{
		cout << a % 10 << endl;
		a /= 10;
		if (a == 0) break;
	}

	return 0;
}