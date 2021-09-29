#include <iostream>
#include "math.h"
#include "time.h"
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	/*string num;
	cout << "Number= ";    cin >> num;
	for (int i = 0; i < num.length(); i++) {
		cout << num[i] << endl;
	}*/ 

	/*int day;
	cout << "Day= ";    cin >> day;
	switch (day) {
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
		cout << "Protrite ochki" << endl;
	}*/

	/*string n;
	int k;
	cout << "n= ";     cin >> n;
	cout << "\nk= ";     cin >> k;
	for (int i = 0; i < k; i++) {
		cout << n[i];
	}
	*/

	double a, b, c, r;
	cout << "a= ";     cin >> a;
	cout << "b= ";     cin >> b;
	cout << "c= ";     cin >> c;
	cout << "r= ";     cin >> r;

	double halfDiagonal;
	halfDiagonal = (pow((a * a + b * b), 0.5) / 2.) ;
	if (r >= halfDiagonal) { cout << "Est probitie!" << endl; }
	else { cout << "Ne probit" << endl; }


	system("pause");
	return 0;
}