#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Rus");
	cout << "������� 2" << endl;
	int d;
	cout << "������� ����� ��� ������" << endl; 
	cin >> d;
	switch (d){
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

	}
	return 0;
}