#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int day;
	cout << "������� ����� ��� ������." << endl;
	cin >> day;
	if (day > 0 && day < 8) {
		switch (day)
		{
		case 1:
			cout << "�����������" << endl << endl;
			break;
		case 2:
			cout << "�������" << endl << endl;
			break;
		case 3:
			cout << "�����" << endl << endl;
			break;
		case 4:
			cout << "�������" << endl << endl;
			break;
		case 5:
			cout << "��������" << endl << endl;
			break;
		case 6:
			cout << "�������" << endl << endl;
			break;
		case 7:
			cout << "�����������" << endl << endl;
			break;
		default:
			break;
		}
	}
	else { cout << "� ������ ����� 7 ����, ������� �� �����������" << endl; }
	return 0;
}