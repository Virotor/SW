#include <string>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int n, k;

	cout << "¬ведите число n:" << endl;
	cin >> n;

	cout << "¬ведите число k:" << endl;
	cin >> k;

	k = to_string(n).length() - k;
	n /= pow(10, k);

	cout << n << "\n";

	return 0;
}