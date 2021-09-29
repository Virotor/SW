#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void splittingNumbers() {
	int number;
	cout << "Enter the number, each digit of this number must be printed on a new line: ";
	cin >> number;
	while (number) {
		cout << number % 10;
		number /= 10;
	}
}

void dayOfWeek() {
	int day;
	cout << "Day of the week that you want: ";
	cin >> day;
	switch (day) {
	case 1:
		cout << "Monday";
		break;
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wendnesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;
	default:
		cout << "you must enter the day of the week";
		break;
	}
}

void firstNumbers() {
	int number, amountOfNum;
	cout << "enter two integers number and amount of number and ";
	cout << "returns a number containing the first k digits of n" << endl;
	cout << "number ";  cin >> number;
	cout << "amount of number "; cin >> amountOfNum;
	if (number < amountOfNum) {
		cout << "Error";
	}
	else {
		int i = 0, kk = number;
		while (kk) {
			kk /= 10;
			i++;
		}
		cout << number / int(pow(10, (i - amountOfNum)));
	}

}
void dimensions() {

	cout << "Enter the dimensions of the parallelepiped:" << endl;
	long long object[3] = { 0, 0, 0 };
	cout << "Object height = "; cin >> object[0];
	cout << "Object length = "; cin >> object[1];
	cout << "Object width = ";  cin >> object[2];
	cout << "Enter the dimensions of hole: " << endl;

	long long hole[2] = { 0, 0 };
	cout << "Hole length = "; cin >> hole[0];
	cout << "Hole width = "; cin >> hole[1];


	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				continue;
			}
			if (object[i] <= hole[0] && j[object] <= hole[1]) {
				cout << "Yes" << endl;
				return;
			}
		}
	}
	cout << "The parallelepiped will not pass through the hole\n";
}

void password() {
	srand(time(NULL));
	string realPass = "";
	for (int i = 0; i < 4; i++) {
		realPass += rand() % 10 + '0';
	}
	string myPass = "0000";
	cout << "Task5:\n";
	while (myPass[0] < '9' + 1) {
		if (myPass == realPass) {
			cout << "Password: " << myPass << '\n';
			return;
		}
		int j = 3;
		myPass[j]++;
		while (myPass[j] > '9' && j > 0) {
			myPass[j - 1]++;
			myPass[j] = '0';
			j--;
		}
		if (j == 0 && myPass[0] == '9') {
			myPass[0]++;
		}
	}
	cout << "Password isn't founded";
}

int main() {
	splittingNumbers();
	dayOfWeek();
	firstNumbers();
	dimensions();
	password();
	return 0;
}