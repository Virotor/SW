#include <iostream>
using namespace std;
int main() {
	cout << "input hole dimensions(width and length)\n";
	int holeWidth, holeLength;
	cin >> holeWidth >> holeLength;
	cout << "input dimensions of the parallelepiped(width, length, height)\n";
	int width, length, height;
	cin >> width >> length >> height;
	int min1;
	min1 = min(width, length);
	int min2;
	min2 = min(length, height);
	int min3;
	min3 = min(min1, min2);
	int max3;
	max3 = max(min1, min2);
	min1 = min(holeWidth, holeLength);
	int max1;
	max1 = max(holeWidth, holeLength);
	if (min3 <= min1 and max3 <= max1) {
		cout << "suits";
	}
	else {
		cout << "doesn't suit";
	}
	return 0;
}