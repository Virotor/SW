#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "write a number" << endl;
	cin >> x;
	while (x) {
		cout << x % 10 << endl;
		x /= 10;
	}
}