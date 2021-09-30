#include <iostream>;
#include <locale.h>;
#include <sstream>;
using namespace std;
void z1() {


	cout << "Enter number";
	int c, a;
	int k = 1;
	int b;
	int g;
	cin >> c;
	a = c;
	int f;
	for (a; a > 10; a /= 10) {
		k++;
	}
	for (k; k > 0; k--) {
		b = pow(10, k);
		g = c;
		g = g / (b / 10);
		cout << g << endl;
		c = c % (b / 10);
	}
}
	