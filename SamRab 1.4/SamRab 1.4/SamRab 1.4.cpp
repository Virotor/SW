#include <iostream>

using namespace std;

int main() {
    double h, w, a, b, c;
	cout << "Hole height "; cin >> h;
	cout << "Hole width "; cin >> w;
	cout << "Length of a parallelepiped "; cin >> a;
	cout << "Weight of a parallelepiped "; cin >> b;
	cout << "Height of a parallelepiped "; cin >> c;
	if (h > 0 and w > 0 and a > 0 and b > 0 and c > 0) {
		if (a <= h and b <= w or c <= w) cout << "  pass";
		else if (a <= w and b <= h or c <= h) cout << "  pass";
		else if (b <= h and a <= w or c <= w) cout << "  pass";
		else if (b <= w and a <= h or c <= h) cout << "  pass";
		else if (c <= h and b <= w or a <= w) cout << "  pass";
		else if (c <= w and b <= h or a <= h) cout << "  pass";
		else cout << "  not pass";
	}
	else cout << "Error";
	return 0;
}