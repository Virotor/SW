#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	double dlina, shirina, visota, dlinaOterstia,shirinaOtverstia;
	cout << "������� ������ = ";
	cin >> dlina;
	cout << "������� ������ = ";
	cin >> shirina;
	cout << "������� ������ = ";
	cin >> visota;
	cout << "������� ������ ���������� = ";
	cin >> dlinaOterstia;
	cout << "������� ������ ��������� = ";
	cin >> shirinaOtverstia;
	if ((dlina < dlinaOterstia) && (shirina < shirinaOtverstia)) {
		cout << "������� ����� ���������  " << endl;
	}
	else {
		if ((dlina < shirinaOtverstia) && (shirina < dlinaOterstia)) {
			cout << "������� ����� ���������  " << endl;
		}
		else {
			if (((visota < shirinaOtverstia)||(visota < dlinaOterstia)) && ((dlina < shirinaOtverstia) || (dlina < dlinaOterstia))) {
				cout << "������� ����� ��������� "<<endl;
			}
			else {
				if ((visota < shirinaOtverstia) || (visota < dlinaOterstia) && ((shirina < shirinaOtverstia) || (shirina < dlinaOterstia))) {
					cout << "������� � ��������� " << endl;
				}
				else {
					cout << "�� ������� � ��������� " << endl;
				}
			}
		}
	}
	
}