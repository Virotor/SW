#include <iostream>
#include <cmath>

int main() {
	using namespace std;
	int x, y = 1;
	cout << "Please enter a positive number "; cin >> x;
	for (y; x != 0; y++) {
		cout << x % 10 << endl;
		x /= 10;
	}


	int a;
	cout << "Enter the day of the week"; cin >> a;
	switch (a) {
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	case 7:
		cout << "Sunday" << endl;
		break;

	default:
		cout << "There is no such day of the week" << endl;
	}


	int n, k, s, c = 0, b;
	cout << "Enter number n "; cin >> n;
	cout << "Enter number k "; cin >> k;
	s = n;
	for (c; s > 0; c++) {
		s /= 10;
	}
	if (k > c)
		cout << n << endl;
	else
	{
		b = n / pow(10, c - k);
		cout << b << endl;
	}


	double l, h, v, r;
	int j;
	cout << "Enter Hole Radius, Length, Width, Box Height " << endl;
	cin >> r;
	cin >> l;
	cin >> v;
	cin >> h;
	if ((pow(l * l + v * v, 0.5)) <= r * 2)
		j = 1;
	else if ((pow(h * h + v * v, 0.5)) <= r * 2)
		j = 1;
	else if ((pow(l * l + h * h, 0.5)) <= r * 2)
		j = 1;
	else
		j = 2;

	switch (j) {
	case 0:
		cout << "Will not enter";
		break;
	case 1:
		cout << "Will enter";
		break;
	}

	return 0;
}