#include <iostream>
using namespace std;
int main()
{
	setlocale (LC_ALL, "RUS");

	long long int n, f;
	int k, s;
	cout << "¬ведите n и k:" << endl;
	cin >> n >> k;
	f = n;
	for (s = 0; f > 0; s++)
	{
		f /= 10;
	}

	s -= k;

	for (int r = s; r > 0; r--)
	{
		n /= 10;
	}
	cout << n << endl;
	return(0);
}