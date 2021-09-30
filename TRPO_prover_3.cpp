#include <iostream>
using namespace std;

int main()
{
	int n, k;
	cout << "write a number" << endl;
	cin >> n;
	cout << "write k" << endl;
	cin >> k;
	while (k<n) {
		cout << n % 10 << endl;
		n /= 10;
		k *= 10;
	}
}