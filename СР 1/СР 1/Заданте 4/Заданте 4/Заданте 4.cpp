
#include <iostream>
using namespace std;
int main()
{
	double vis, sh, l, vis1, sh1;
	cout << "vis=  ";   cin >> vis;
	cout << "sh=  ";   cin >> sh;
	cout << "l=  ";   cin >> l;
	cout << "vis1=  ";   cin >> vis1;
	cout << "sh1=  ";   cin >> sh1;
	if (vis > 0 && sh > 0 && l > 0 && vis1 > 0 && sh1 > 0);
	{
		if (vis <= vis1 && sh <= sh1) cout << "ohhh myyy. NICE";
		else  cout << "ERRORRRRR";
	}
}