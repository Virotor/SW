#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
	int holeLength, holeWidth;

	cout << "Enter hole length: "; cin >> holeLength;
	cout << "Enter hole width: "; cin >> holeWidth;
	int figureLength, figureWidth, figureHeight;
	cout << "Enter figure length: "; cin >> figureLength;
	cout << "Enter figure width: "; cin >> figureWidth;
	cout << "Enter figure height: "; cin >> figureHeight;
	if (((holeLength >= figureLength && holeWidth >= figureWidth) || (holeLength >= figureWidth && holeWidth >= figureLength)) ||
		((holeLength >= figureLength && holeWidth >= figureHeight) || (holeLength >= figureHeight && holeWidth >= figureLength)) ||
		((holeLength >= figureHeight && holeWidth >= figureWidth) || (holeLength >= figureWidth && holeWidth >= figureHeight))) {
		cout << "Parallelepiped will pass into the hole!" << endl;
	}
	else {
		cout << "Parallelepiped will not pass into the hole!" << endl;
	}
	system("pause");
}