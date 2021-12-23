#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");

	int a;
	cout << "¬ведите число:";
	cin >> a;
	while (a)
	{

		cout << a % 10 << endl;
		a /= 10;
	}

	return 0;
}






