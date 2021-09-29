#include<iostream>
#include<cmath>

using namespace std;
int main() {
	int a, a1, c, i, h;
	cout << "Vvedite chislo: " << endl;
	cin >> a;
	a = fabs(a);
	a1 = a;
	for (i = 0; a1 > 0; i++)
	{
		a1 = a1 / 10;
	}
	for (h = i; a > 0; i--)
	{
		c = a / pow(10, (i - 1));
		a = a - c * pow(10, (i - 1));
		cout << c << endl;
	}
	return 0;

}