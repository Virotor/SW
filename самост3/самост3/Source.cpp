#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	double a, b, h, c, s;
	cout << "������� ����� = ";
	cin >> a;
	cout << "������� ������ = ";
	cin >> b;
	cout << "������� ������ = ";
	cin >> h;
	cout << "������� ����� ��������� = ";
	cin >> c;
	cout << "������� ������ ��������� = ";
	cin >> s;
	if ((a <= c) && (b <= s)) {


		cout << "������� ����� ��������� " << endl;
	}
	else {
		if ((a <= s) && (b <= c)) {
			cout << "������� ����� ��������� " << endl;
		}
		else {
			if (((h <= s) || (h <= c)) && ((a <= s) || (a <= c))) {
				cout << "������� ����� ��������� " << endl;
			}
			else {
				if ((h <= s) || (h <= c) && ((b <= s) || (b <= c))) {
					cout << "������� � ��������� " << endl;
				}
				else {
					cout << "�� ������� � ��������� " << endl;
				}
			}
		}
	}

}