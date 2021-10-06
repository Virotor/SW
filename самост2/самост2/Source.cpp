#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int n, k, i, temp;
	cout << "¬ведите n " << endl;
	cin >> n;
	cout << "¬ведите k " << endl;
	cin >> k;
	temp = n;
	for (i = 0; temp > 0; i++) {
		temp /= 10;
	}
	i -= k;
	for (int j = i; j > 0; j--) {
		n /= 10;
	}
	cout << n << endl;
	return 0;
}
