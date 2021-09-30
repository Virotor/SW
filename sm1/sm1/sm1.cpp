#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, c, x, i,b;
	cout << "Vvedite chislo" << endl;
	cin >> x;
	x = abs(x);
	b = x;
	n = 1;
	while ((b /= 10) > 0) n++;
	for (i = n; i > 0;i--) {
		c = x / pow(10,i-1);
		cout << c<<endl;
		x =x-c* pow(10, i-1);
	}
	return 0;
}



