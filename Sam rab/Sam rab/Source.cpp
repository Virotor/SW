#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int day;
	cout << " ������� �������� ��� ������ " << endl;
	cin >> day;
	switch (day) {
	case 1:
		cout << " ����������� ";
		break;
	case 2:
		cout << " ������� ";
		break;
	case 3:
		cout << " ����� ";
		break;
	case 4:
		cout << " ������� ";
		break;
	case 5:
		cout << " �������  ";
		break;
	case 6:
		cout << " ������� ";
		break;

	case 7:
		cout << " �����������  ";
		break;
	default:
		cout << " ������ ";
		break;
	}
	return 0;
}