#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main() {
//3 �������
	setlocale(LC_ALL, "RUS");
	int n, k;
	cout << "������� ����� - ";  cin >> n;
	cout << "�������, ����� ���������� ������ ������ ������� ����� ����� ������� - "; cin >> k;
	k = to_string(n).length() - k;
	n /= pow(10, k);
	cout << n << endl;
	return 0;
}