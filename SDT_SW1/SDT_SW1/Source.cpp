#include <iostream>
#include <cmath>

int main() {
	using namespace std;
	int NumTask1, y = 1;
	cout << "Please enter a positive number "; cin >> NumTask1;
	for (y; NumTask1 > 0; y++) {
		cout << NumTask1 % 10 << endl;
		NumTask1 /= 10;
	}


	

	return 0;
}