#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "������� 1" << endl;
	int x;
	cout << "������� �����" << endl;
	cin >> x;
	while (x) {
		cout << x % 10 << endl;
		x /= 10;
	}
	return 0;
}