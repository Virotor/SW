#include <iostream>
#include "math.h"
#include <ctime>
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

	/*double a, b, c, r;
	cout << "a= ";     cin >> a;
	cout << "b= ";     cin >> b;
	cout << "c= ";     cin >> c;
	cout << "r= ";     cin >> r;

	double halfDiagonal;
	halfDiagonal = (pow((a * a + b * b), 0.5) / 2.) ;
	if (r >= halfDiagonal) { cout << "Est probitie!" << endl; }
	else { cout << "Ne probit" << endl; }*/

	srand(time(NULL));
	string randomPassword="0000";
	for (int i = 0; i < 4; i++) {
		randomPassword[i] = rand() % (57-48+1)+47;
	}
	string password = "0000";
	for (int j = 0; j <= randomPassword[0]; j++) { password[0] = j; }
	for (int q = 0; q <=randomPassword[1]; q++) { password[1] = q; }
	for (int w = 0; w <=randomPassword[2]; w++) { password[2] = w; }
	for (int e = 0; e <=randomPassword[3]; e++) { password[3] = e; }
	cout << randomPassword << endl;
	cout << password << endl;
	

	system("pause");
	return 0;
}