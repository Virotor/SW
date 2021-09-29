#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, k;
	string numberN;
	cout << "Введите n = "; cin >> n; cout << endl << "Введите k = "; cin >> k;

	numberN = to_string(n);
	for (int i = 0; i < k; i++) {
		cout << numberN[i];
	}
}