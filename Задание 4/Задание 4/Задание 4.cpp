#include <iostream>
using namespace std;
int main()
{
	double z, x, c, v, u;
	cout << "enter length of the parallelepiped: "; cin >> c;
	cout << "enter height of the parallelepiped: "; cin >> x;
	cout << "enter weight of the parallelepiped: "; cin >> z;
	cout << "enter hole width: "; cin >> v;
	cout << "enter hole height: "; cin >> u;
	if (z > 0 && x > 0 && c > 0 && v > 0 && u > 0) {
		if (c <= v and z <= u or x <= u) cout << "kk";
		else if (c <= v and z <= u or x <= u) cout << "kk";
		else if (z <= u and z <= v or x <= v) cout << "kk";
		else if (z <= v and z <= u or x <= u) cout << "kk";
		else if (x <= u and z <= v or x <= v) cout << "kk";
		else if (x <= v and z <= u or x <= u) cout << "kk";
		else cout << "nah";
	}
	else cout << "mistake";
	return 0;
}