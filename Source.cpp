#include<iostream>
using namespace std;
int main()
{
	unsigned int n;
	cout << "Input number: ";
	cin >> n;
	for (int i = pow(10, int(log10(n))); i != 0; i /= 10)
	cout << n / i % 10 <<"\n" << "";
	cout << endl;
	return 0;
}