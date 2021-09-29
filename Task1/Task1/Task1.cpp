#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter the number:  "; cin >> num;
	int count = 1;
	for (int i = 0; i < count; i++)
	{
		cout << num % 10 << endl; num /= 10;
		if (num != 0)
		{
			count++;
		}
	}
	return 0;



}