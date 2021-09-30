#include<iostream>
#include<math.h>
#include<string>
#include<windows.h>
#include<stdlib.h>
using namespace std;

int main()
{
	double x, y, a, b, c;
	cout << "¬ведите длину и ширину отверстви€ :" << endl;
	cin >> x >> y;
	cout << "¬ведите длину, ширину и высоту параллелепипеда: " << endl;
	cin >> a >> b >> c;
	if (a < x && b < y || a < x && c < y || b < x && c < y || a < y && b < x || a < y && c < x || b < y && c < x)
	{
		cout << "ѕараллелепипед спокойно проходит в отверствие" << endl;
	}
	else cout << "ѕараллелепипед никак не проходит в отверствие" << endl;
	return 0;
}