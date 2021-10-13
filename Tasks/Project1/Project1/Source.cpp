#include <iostream>
using namespace std;
int main()

{
		int n;
		cout << "Enter desired number: ";
		cin >> n;
		while (n)
		{
			cout << n % 10 << endl;
			n /= 10;
		}
		system("pause");
	}