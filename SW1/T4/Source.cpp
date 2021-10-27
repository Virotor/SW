#include <iostream>

using namespace std;

int main()
{
	unsigned int holeWidth, holeLength, parallelepipedWidth, parallelepipedLength, parallelepipedHeight;
	short isParallelepipedSuitable = 0;
	cout << "Enter length of hole: "; cin >> holeLength;
	if (holeLength == 0)
	{
		cout << "The hole doesn't exist"; return 0;
	}
	cout << "\nEnter width of hole: "; cin >> holeWidth;
	if (holeWidth == 0)
	{
		cout << "The hole doesn't exist"; return 0;
	}
	cout << "\nEnter width of parallelepiped: "; cin >> parallelepipedWidth;
	if (parallelepipedWidth == 0)
	{
		cout << "The parallelepiped doesn't exist"; return 0;
	}
	cout << "\nEnter length of parallelepiped: "; cin >> parallelepipedLength;
	if (parallelepipedLength == 0)
	{
		cout << "The parallelepiped doesn't exist"; return 0;
	}
	cout << "\nEnter height of parallelepiped: "; cin >> parallelepipedHeight;
	if (parallelepipedHeight == 0)
	{
		cout << "The parallelepiped doesn't exist"; return 0;
	}
	if (holeLength >= parallelepipedHeight && holeWidth >= parallelepipedWidth) isParallelepipedSuitable++;
	if (holeLength >= parallelepipedHeight && holeWidth >= parallelepipedLength) isParallelepipedSuitable++;
	if (holeLength >= parallelepipedWidth && holeWidth >= parallelepipedLength) isParallelepipedSuitable++;
	if (holeLength >= parallelepipedWidth && holeWidth >= parallelepipedHeight) isParallelepipedSuitable++;
	if (holeLength >= parallelepipedLength && holeWidth >= parallelepipedWidth) isParallelepipedSuitable++;
	if (holeLength >= parallelepipedLength && holeWidth >= parallelepipedHeight) isParallelepipedSuitable++;
	if (isParallelepipedSuitable >= 1) cout << "\nThe parallelepiped is suitable for this hole.";
	else cout << "\nThe parallelepiped is unsuitable for this hole.";
	return 0;
}