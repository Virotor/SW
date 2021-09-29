#include <iostream>
using namespace std;
int main()
{
	int k, n, c, i = 0, r;
	cin >> n >> k;
	if (n == 0) cout << n; else {
		n = abs(n);
		c = n;
		while (c > 0) {
			i++;
			c = c / 10;
		}
		for (c = 1;c <= k;c++) {
			r = pow(10, i - c);
			cout << n / r;
			n = n % r;
		}
	}
	return(0);
}