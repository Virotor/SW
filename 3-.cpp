#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	int n, k, N = 0;
	stringstream ss;
	cout << "Input n: ";
	cin >> n;
	cout << "Input k: ";
	cin >> k;
	ss << n;
	while (N != k)
	{
		cout << ss.str()[N];
		N++;
	}
	return 0;
}