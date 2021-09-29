#include <iostream>
using namespace std;

void splittingNumbers() {
	int number;
	cout << "enter the number, each digit of this number must be printed on a new line: ";
	cin >> number;
	while (number) {
		cout << number % 10 << endl;
		number /= 10;
	}
}

int main() {
	splittingNumbers();
	return 0;
}