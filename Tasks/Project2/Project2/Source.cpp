#include <iostream>
using namespace std;
int main() {

	int c;
	cout << "Enter the number "; cin >> c;
	if (c >= 8)
	{
		cout << "Error. Enter correct number" << endl;
	}
	else if (c < 1) {
		cout << "Error. Enter correct number" << endl;
	}
	switch (c)
	{
	case 1:
		cout << "It is Monday" << endl;
		break;
	case 2:
		cout << "It is Tuesday" << endl;
		break;
	case 3:
		cout << "It is Wentsday" << endl;
		break;
	case 4:
		cout << "It is Tuesday" << endl;
		break;
	case 5:
		cout << "It is Friday" << endl;
		break;
	case 6:
		cout << "It is Sutday" << endl;
		break;
	case 7:
		cout << "It is Sunday" << endl;
		break;
	}
	system("pause");
}