#include<iostream>
using namespace std;
int main()
{
	int a,i;
	setlocale(LC_ALL, "Rus");
	cout << "¬ведите число: ";
	cin >> a;
	i = 1;
	while ((a / i) >= 1) {
		i *= 10;
	}
	i/= 10;
	while (1 >= 1) {
		cout << (a / i) % 10 << endl;
		i /= 10;
	}
}