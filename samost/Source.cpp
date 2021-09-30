#include <iostream>;
using namespace std;
int main() {
	int holeWidth, holeLength, holeHeight, parWidth, parHeight, parLength;
	cout << "Enter hole length, width and height\n";
	cin >> holeHeight >> holeLength >> holeWidth;
	cout << "Enter par length, width and height\n";
	cin >> parHeight >> parLength >> parWidth;
	if ((holeHeight >= parHeight && holeWidth >= parWidth && holeLength >= parLength) ||
		(holeHeight >= parLength && holeWidth >= parWidth && holeLength >= parHeight) ||
		(holeHeight >= parWidth && holeWidth >= parHeight && holeLength >= parLength) ||
		(holeHeight >= parHeight && holeWidth >= parLength && holeLength >= parWidth) ||
		(holeHeight >= parLength && holeWidth >= parHeight && holeLength >= parLength)||
	    (holeHeight >= parWidth && holeWidth >= parLength && holeLength >= parHeight))
	{
		cout << "\nFITS";
	}
	else{
		cout << "\nDOESN'T FIT";
	}
	
	return 0;
}