#include <iostream>
using namespace std;
int main()
{
	int a[3], b[4], i, c;
	cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
	if (a[1] > a[0]) { c = a[0]; a[0] = a[1]; a[1] = c; }
	if (a[2] > a[1]) { c = a[1]; a[1] = a[2]; a[2] = c; }
	if (a[1] > a[0]) { c = a[0]; a[0] = a[1]; a[1] = c; }
	if (b[1] > b[0]) { c = b[0]; b[0] = b[1]; b[1] = c; }
	if (b[2] > b[1]) { c = b[1]; b[1] = b[2]; b[2] = c; }
	if (b[1] > b[0]) { c = b[0]; b[0] = b[1]; b[1] = c; }
	c = 0;
	for (i = 0;i < 3;i++)
		if (a[i] > b[i]) {
			cout << "Impossible";
			c = 1;
			i = 3;
		}
	if (c == 0) cout << "Possible";
}