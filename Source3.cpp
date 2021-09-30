#include<iostream>
#include<string>
using namespace std;
int main()
{
	int k, n, N = 0;
	cout << "Input n: ";
	cin >> n;
	cout << "Input k: ";
	cin >> k;
	while (1 > (n /= 10) > 0)
	{
		N++;
		n /= pow(10, N - k);
	}
	cout << n;
	return 0;
}