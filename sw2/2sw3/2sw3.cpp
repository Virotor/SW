#include <iostream>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main() {
	//3 çàäàíèå
	setlocale(LC_ALL, "RUS");
	int n, k;
	cout << "Ââ÷èñëî - ";  cin >> n;
	cout << "Ââêîëè÷åñòâî  - "; cin >> k;
	k = to_string(n).length() - k;
	n /= pow(10, k);
	cout << n << endl;
	return 0;
}