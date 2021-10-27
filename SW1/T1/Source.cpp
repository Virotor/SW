#include <iostream>

using namespace std;

int main()
{
	int inputNumber, counter = 0;
	short digitOfNumber[10] = { 0 };
	cout << "Enter your number: "; cin >> inputNumber; cout << "\nYour number consists of:\n";
	if (inputNumber < 0)
	{
		inputNumber = abs(inputNumber);
		cout << "(-1)*\n";
	}
	if (inputNumber == 0) cout << "0";
	while (inputNumber != 0)
	{
		digitOfNumber[counter] = inputNumber % 10;
		inputNumber = (inputNumber - inputNumber % 10) / 10;
		counter++;
	}
	while (counter > 0)
	{
		counter--;
		cout << digitOfNumber[counter] << endl;
	} 
	return 0;
}