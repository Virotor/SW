#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, const char* argv[]) {
	int day;
	cout�"������� ����� ��� ";
	cin�day_num;
	switch (day) {
	case 1:
		cout�"�����������"�endl;
		break;
	case 2:
		cout�"�������"�endl;
		break;
	case 3:
		cout�"�����"�endl;
		break;
	case 4:
		cout�"�������"�endl;
		break;
	case 5:
		cout�"�������"�endl;
		break;
	case 6:
		cout�"�������"�endl;
		break;
	case 7:
		cout�"�����������"�endl;
		break;
	default:
		cout�"�� �����, ������� ����� �� 1 �� 7"�endl;
	}
	return 0;
}