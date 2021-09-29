
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, k;
	cout << "n = "; cin >> n; cout << "k = "; cin >> k;
	k = to_string(n).length() - k;
	n /= pow(10, k);
	cout << n << endl;

	cout << "\nTask 3 completed\n" << endl;
}
