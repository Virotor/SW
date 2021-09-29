#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	int b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	if (b <= size(a))
	{
		for (int c = 0; c < b; c++) {
			cout << a[c] << endl;
		}
	}
	else cout << "ERROR" << endl;
	return 0;
}

