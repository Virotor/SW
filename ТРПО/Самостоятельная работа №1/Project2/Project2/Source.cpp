#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int dayNumber;
	setlocale(LC_ALL, "RUS");
	cout << "������� ����� ��� ������: ";
	cin >> dayNumber;
		switch (dayNumber) {
		case 1:
			cout << "�����������";
			break;
		case 2:
			cout << "�������";
			break;
		case 3:
			cout << "�����";
			break;
		case 4:
			cout << "�������";
			break;
		case 5:
			cout << "�������";
			break;
		case 6:
			cout << "�������";
			break;
		case 7:
			cout << "�����������";
			break;
		default:
			cout << "�� ����� ������������ ����� ��� ������: \n";
			
		
	}
	return 0;
}