#include <iostream>
#include <cmath>

int main() {
	using namespace std;
	int NumTask1, y = 1;
	cout << "Please enter a positive number "; cin >> NumTask1;
	for (y; NumTask1 > 0; y++) {
		cout << NumTask1 % 10 << endl;
		NumTask1 /= 10;
	}


	int NumTask2;
	cout << "Enter the day of the week"; cin >> NumTask2;
	switch (NumTask2) {
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	case 7:
		cout << "Sunday" << endl;
		break;

	default:
		cout << "There is no such day of the week" << endl;
	}


	

	return 0;
}