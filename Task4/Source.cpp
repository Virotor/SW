#include <iostream>

using namespace std;

int main() {
	int lengthOfHole, highOfHole, widthOfHole, lengthOfP, highOfP, widthOfP;

	cout << "length of Hole is "; cin >> lengthOfHole;
	cout << "high of Hole is "; cin >> highOfHole;
	cout << "width of Hole is "; cin >> widthOfHole;

	cout << "length of Parallelepiped is "; cin >> lengthOfP;
	cout << "high of Parallelepiped is "; cin >> highOfP;
	cout << "width of Parallelepiped is "; cin >> widthOfP;

	if ((lengthOfP <= lengthOfHole) && (highOfP <= highOfHole) && (widthOfP <= widthOfHole)) {
		cout << "проходит";
		return 0;
	} 
	cout << "Не проходит";
}