#include <iostream>
#include <ctime>

int main() {
	using namespace std;
	int NumTask1, y = 1, Result1;
	cout << "Please enter a positive number "; cin >> NumTask1;
	for (y; NumTask1 > 0; y++) {
		Result1 = NumTask1 % 10;
		cout << Result1 << endl;
		NumTask1 /= 10;
	}


	int NumTask2;
	cout << "Enter the day of the week "; cin >> NumTask2;
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


	int Num1Task3, Num2Task3, Temp, NumOfDigInANum1 = 0, Result2;
	cout << "Enter number n "; cin >> Num1Task3;
	cout << "Enter number k "; cin >> Num2Task3;
	Temp = Num1Task3;
	for (NumOfDigInANum1; Temp > 0; NumOfDigInANum1++) {
		Temp /= 10;
	}
	if (Num2Task3 > NumOfDigInANum1)
		cout << Num1Task3 << endl;
	else
	{
		Result2 = Num1Task3 / pow(10, NumOfDigInANum1 - Num2Task3);
		cout << Result2 << endl;
	}


	double Length, Heigt, Winth, Radius;
	int Unnecessary;
	cout << "Enter Hole Radius, Length, Width, Box Height " << endl;
	cin >> Radius;
	cin >> Length;
	cin >> Winth;
	cin >> Heigt;
	if ((pow(Length * Length + Winth * Winth, 0.5)) <= Radius * 2)
		Unnecessary = 1;
	else if ((pow(Heigt * Heigt + Winth * Winth, 0.5)) <= Radius * 2)
		Unnecessary = 1;
	else if ((pow(Length * Length + Heigt * Heigt, 0.5)) <= Radius * 2)
		Unnecessary = 1;
	else
		Unnecessary = 2;

	switch (Unnecessary) {
	case 0:
		cout << "Will not enter"<<endl;
		break;
	case 1:
		cout << "Will enter"<<endl;
		break;
	}

	int FirstDigit, SecondDigit, ThirdDigit, FourthDigit, Guessed;
	srand(time(NULL));
	FirstDigit = rand() % 10;
	SecondDigit = rand() % 10;
	ThirdDigit = rand() % 10;
	FourthDigit = rand() % 10;
	for (Guessed = 0; Guessed != FirstDigit; Guessed++){}
		cout << Guessed;
	for (Guessed = 0; Guessed != SecondDigit; Guessed++) {}
		cout << Guessed;
	for (Guessed = 0; Guessed != ThirdDigit; Guessed++) {}
		cout << Guessed;
	for (Guessed = 0; Guessed != FourthDigit; Guessed++) {}
		cout << Guessed;
	return 0;
}