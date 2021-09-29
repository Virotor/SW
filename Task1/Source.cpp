#include <iostream>

using namespace std;

int main() {
	string number;
	cin >> number;
	for (int i = 0; i < number.length(); i++) {
		cout << "\n" << number[i];
	}
}