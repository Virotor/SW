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





		cout << "������� 2" << endl;
	int d;
	cout << "������� ����� ��� ������" << endl;
	cin >> d;
	switch (d)
	{
	case 1:
		cout << "�����������" << endl;
		break;

	case 2:
		cout << "�������" << endl;
		break;

	case 3:
		cout << "�����" << endl;
		break;

	case 4:
		cout << "�������" << endl;
		break;

	case 5:
		cout << "�������" << endl;
		break;

	case 6:
		cout << "�������" << endl;
		break;

	case 7:
		cout << "�����������" << endl;
		break;

	default:
		cout << "��������� ���� �� ����������" << endl;

		return 0;
	}




	cout << "������� 3" << endl;
	int n, k, razr = 0;
	cout << "������� �����" << endl;
	cin >> n;
	cout << "������� ���-�� ���������� ����" << endl;
	cin >> k;
	int n2 = n,a=0;
	while (n2) {
		n2 = n2 / 10;
		a++;
	}
	for (int i = 0; i < (a - k); i++) {
		n /= 10;
	}
	cout << n << endl;

	return 0;





	cout << "������� 4" << endl;
	int a, b, c, d, S, r, D;
	cout << "����� ���������������:"; cin >> a;
	cout << "������ ���������������:"; cin >> b;
	cout << "������ ���������������:"; cin >> c;
	cout << "������� ���������:"; cin >> d;
	cout << "������ ��������:"; cin >> r;
	if (a < r, c < r, b < d) {
		cout << "�������������� ������ � ���������" << endl;
	}
	else {
		cout << "�������������� �� ������ � ���������" << endl;
	}
	return 0;




	cout << "������� 5" << endl;
	int Arr[4];
	for (int i = 0; i < 4; i++) {
		Arr[i] = rand() % 9;
	}
	cout << "������ ������������...\n������ ������������..." << endl;

	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			for (int z = 0; z < 10; z++) {
				for (int k = 0; k < 10; k++) {
					if (Arr[0] == x && Arr[1] == y && Arr[2] == z && Arr[3] == k) {
						cout << "������ ��������: " << x << y << z << k;
						break;
					}

				}
			}
		}
	}
	return 0;


}