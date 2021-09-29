#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	while (x > 0) {
		cout << x % 10 << endl;
		x = x / 10;
	}
	return(0);
}