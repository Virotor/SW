#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Vvedite chislo: ";
	cin >> a;
	for (b = 0; a > b; a /= 10)
	{
		c = a % 10;
		cout << c << endl;
	}
	return 0;
}
