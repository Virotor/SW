#include <iostream>
using namespace std;

int main() {
	cout << "������� 3" << endl;
	int n, k, razr = 0;
	cout << "������� �����" << endl;
	cin >> n;
	cout << "������� ���-�� ���������� ����" << endl;
	cin >> k;
	int n2 = n, a = 0;
	while (n2) {
		n2 = n2 / 10;
		a++;
	}
	for (int i = 0; i < (a - k); i++) {
		n /= 10;
	}
	cout << n << endl;

	return 0;
}