#include <iostream>;
#include <locale.h>;
#include <sstream>;
using namespace std;
void z1() {


	cout << "Enter number";
	int c, a;
	int k = 1;
	int b;
	int g;
	cin >> c;
	a = c;
	int f;
	for (a; a > 10; a /= 10) {
		k++;
	}
	for (k; k > 0; k--) {
		b = pow(10, k);
		g = c;
		g = g / (b / 10);
		cout << g << endl;
		c = c % (b / 10);
	}
}
void z2()
{
	int number;
	cout << "Enter the number \n";
	cin >> number;
	switch (number) {
	case 1: cout << "Monday";
		break;
	case 2: cout << "Tuesday";
		break;
	case 3: cout << "Wednesday";
		break;
	case 4: cout << "Thursday";
		break;
	case 5: cout << "Friday";
		break;
	case 6: cout << "Saturday";
		break;
	case 7: cout << "Sunday";
		break;
	default: cout << "Error";
	}
}
void z3() {
	cout << "Enter n and k ";
	int n, a, b, k, g, h = 1;
	cin >> n;
	a = n;
	for (a; a > 10; a /= 10) {
		h++;
	}
	cin >> k;
	int e = h - k;
	for (h; h > e; h--) {
		b = pow(10, h);
		g = n;
		g = g / (b / 10);
		cout << g;
		n = n % (b / 10);
	}
}
void z4() {
	int holeWidth, holeLength, holeHeight, parWidth, parHeight, parLength;
	cout << "Enter hole length, width and height\n";
	cin >> holeHeight >> holeLength >> holeWidth;
	cout << "Enter par length, width and height\n";
	cin >> parHeight >> parLength >> parWidth;
	if ((holeHeight >= parHeight && holeWidth >= parWidth && holeLength >= parLength) ||
		(holeHeight >= parLength && holeWidth >= parWidth && holeLength >= parHeight) ||
		(holeHeight >= parWidth && holeWidth >= parHeight && holeLength >= parLength) ||
		(holeHeight >= parHeight && holeWidth >= parLength && holeLength >= parWidth) ||
		(holeHeight >= parLength && holeWidth >= parHeight && holeLength >= parLength) ||
		(holeHeight >= parWidth && holeWidth >= parLength && holeLength >= parHeight))
	{
		cout << "\nFITS";
	}
	else {
		cout << "\nDOESN'T FIT";
	}

}