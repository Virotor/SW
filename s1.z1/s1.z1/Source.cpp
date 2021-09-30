#include <iostream>
#include <vector>
using namespace std;
int main() {
	int number;
	cin >> number;
	int numeral;
	while (number != 0) {
		numeral = number % 10;
		cout << numeral << "\n";
		number /= 10;
	}
	return 0;
}