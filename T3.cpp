#include<iostream>
#include<math.h>
#include<string>
#include<windows.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int n, k;
	cout << "������� n: " << endl;
	cin >> n;
	cout << "������� k: " << endl;
	cin >> k;
	k = to_string(n).length() - k;
	n = n / pow(10, k);
	cout << n << endl;
	return 0;
}