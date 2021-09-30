#include <iostream>;
using namespace std;

int main() {
	cout << "Enter n and k ";
	int n, a, b, k, g, h = 1;
	cin >> n;
	a = n;
	for (a; a > 10; a /= 10) {
		h++;
	}
	cin >> k;
	int e = h - k;
	for (h; h > e; h--) {
		b = pow(10, h);
		g = n;
		g = g / (b / 10);
		cout << g;
		n = n % (b / 10);
	}
	return 0;
}