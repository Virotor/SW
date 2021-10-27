#include <iostream>

using namespace std;

int main()
{
	int n;
	unsigned short k, counter = 0;
	short digitOfNumber[10]; //Т.к. integer не может принимать значение, имеющее более 10 разрядов
	cout << "Enter value n: "; cin >> n;
	n = abs(n);
	cout << "\nEnter value k: "; cin >> k;
	while (n != 0)
	{
		digitOfNumber[counter] = n % 10;
		n = (n - n % 10) / 10;
		counter++;
	}
	while (k > counter)
	{
		cout << "\n!!!Invalid value k, it should be lower than number of digits, try again: "; cin >> k;
	}
	if (k == 0)
	{
		cout << "\nk equals 0, there is no number consists of zero digits of n.";
		return 0;
	}
	cout << endl;
	k = counter - k;
	while (counter != k)
	{
		counter--;
		cout << digitOfNumber[counter] << endl;
	}
	return 0;
}