#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int n,n1,c,l,h;
	cout << "enter number\n";
	cin >> n;
	n = fabs(n);
	n1 = n;
	for (l = 0; n1 > 0; l++) {
		n1 = n1 / 10;
	}
	for (h = l; n > 0; l--) {
		c = n / pow(10, (l - 1));
		n = n - c * pow(10, l - 1);
		cout << c << endl;
	}
	return 0;
}