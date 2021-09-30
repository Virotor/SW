#include <iostream>
using namespace std;

int main()
{
	int n, k, x, i, r;
	cout << "Vvedite n, k: " << endl;
	cin >> n >> k;
	if (n == 0) cout << n; else 
	{
		i = 0;
		n = abs(n);
		x = n;
		while (x > 0) 
		{
			i++; x /= 10;
		}
		for (x = 1; x <= k; x++) 
		{
			r = pow(10, i - x);
			cout<<"Result: \n" << n / r;
			n %= r;
		}
	}
	return(0);
}