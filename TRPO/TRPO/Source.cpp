#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	using namespace std;
	setlocale(LC_ALL, "RUS");
	int num;
	cout << "¬ведите число\n"; cin >> num;
	while (num)
	{
		cout << num % 10 << endl;
		num /= 10;
	}
	system("pause");
}