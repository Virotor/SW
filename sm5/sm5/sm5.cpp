#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a, b, c, d,i,v,f,k;
	a = rand() % 10 + 0;;
	b = rand() % 10 + 0;
	c = rand() % 10 + 0;
	d = rand() % 10 + 0;
	for (i = 0; i < 10; i++) {
		if (a == i) {
			cout << a;
			break;
		}
	}
	for (v = 0; v < 10; v++) {
		if (b == v) {
			cout << b;
			break;
		}
	}
	for (f = 0; f < 10; f++) {
		if (c == f) {
			cout << c;
			break;
		}
	}
	for (k = 0; k < 10; k++) {
		if (d == k) {
			cout << d;
			break;
		}
	}
	return 0;
}
