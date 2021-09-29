#include <iostream>
using namespace std;
int main()
{
	
	int c, z, x = 0;
	cout << "enter a number" << endl;
	cin >> c;
	while (c > 0)
	{
		z = c % 10;
		x = x * 10 + z;
		c = c / 10;
	}
	while (x > 0)
	{
		cout << x % 10 << " " << endl;
		x = x / 10;
	}
}