#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int num;
	cout << "�����";
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "�����������" << endl;
		break;
	case 2:
		cout << "�������" << endl;
		break;
	case 3:
		cout << "����� " << endl;
		break;
	case 4:
		cout << "������� " << endl;
		break;
	case 5:
		cout << "������� " << endl;
		break;
	case 6:
		cout << "������� " << endl;
		break;
	case 7:
		cout << "����������� " << endl;
		break;
	}
	return 0;
}