
#include <iostream>
using namespace std;

int main()
{
	int x, y, z, a, b;
	cout << "write x" << endl;
	cin >> x;
	cout << "write y" << endl;
	cin >> y;
	cout << "write z" << endl;
	cin >> z;
	cout << "write a" << endl;
	cin >> a;
	cout << "write b" << endl;
	cin >> b;
	if (x <= a) {
		if (y <= b) {
			cout << "proidet" << endl;
		}
		else {
			if (z <= b) {
				cout << "proidet" << endl;
			}
		}
	}
	if (x <= b) {
		if (y <= a) {
			cout << "proidet" << endl;
		}
		else {
			if (z <= a) {
				cout << "proidet" << endl;
			}
		}
	}
	if (y <= a) {
		if (z <= b) {
			cout << "proidet" << endl;
		}
	}
	if (y <= b) {
		if (z <= a) {
			cout << "proidet" << endl;
		}
	}

}

