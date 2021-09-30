#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, b, h, a1, b1, k, d, d1, d2, d3;
	cout << "Input base length: ";
	cin >> a;
	cout << "Input base width: ";
	cin >> b;
	cout << "Input height: ";
	cin >> h;
	cout << "Input lengths of hole: ";
	cin >> a1;
	cout << "Input width of hole: ";
	cin >> b1;
	d = sqrt(pow(a, 2) + pow(b, 2));
	d1 = sqrt(pow(a, 2) + pow(h, 2));
	d2 = sqrt(pow(b, 2) + pow(h, 2));
	d3 = sqrt(pow(a1, 2) + pow(b1, 2));
	if (d <= d3)
	{
		cout << "\n " << "The parallelepiped goes into the hole throught base";
	}
	else {
		cout << "\n " << "The parallelepiped not fit intothe hole throught base";
	}
	if (d1 <= d3)
	{
		cout << "\n " << "The parallelepiped goes into the hole throught first side";
	}
	else {
		cout << "\n " << "The parallelepiped not fit intothe holethrought first side";
	}
	if (d2 <= d3)
	{
		cout << "\n " << "The parallelepiped goes into the hole throught second side";
	}
	else {
		cout << "\n " << "The parallelepiped not fit intothe hole throught second side";
	}
	return 0;
}