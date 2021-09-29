
#include <iostream>
using namespace std;
int main()
{
	int n,k,f=1;
	cout << "enter n:";
	cin >> n;
	cout << "enter k:";
	cin >> k;
	int t = 0,g;
	g = n;

	for (int d=10; f > 0; d *= 1)
	{
		f = n / d;		
		n /= 10;
		t++;
	}
	int y =g / pow(10, t - k);
	
		
	if (k > t) { cout << "eror"; }
	else {
		cout << y;
	}
	
	
	

}
