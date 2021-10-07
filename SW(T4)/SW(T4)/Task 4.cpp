#include <iostream>
using namespace std;

int main()
{
	int width, lenght, height, diametr;
	double FirstDiagonal, SecondDiagonal,
		ThirdDiagonal, SmalerDiagonal;
	do {
		cout << "Enter widht:";
		cin >> width;
	} while (width < 0);
	do {
		cout << "Enter lenght:";
		cin >> lenght;
	} while (lenght < 0);
	do {
		cout << "Enter Height:";
		cin >> height;
	} while (height < 0);
	do {
		cout << "Enter Diametr of a circle:";
		cin >> diametr;
	} while (diametr < 0);

	FirstDiagonal = pow((width * width) + (lenght * lenght), 1. / 2.);
	SecondDiagonal = pow((width * width) + (lenght * lenght), 1. / 2.);
	ThirdDiagonal = pow((width * width) + (lenght * lenght), 1. / 2.);

	if (FirstDiagonal <= SecondDiagonal && FirstDiagonal <= ThirdDiagonal)
		SmalerDiagonal = FirstDiagonal;
	else if (SecondDiagonal <= ThirdDiagonal && SecondDiagonal <= FirstDiagonal)
		SmalerDiagonal = SecondDiagonal;
	else if (ThirdDiagonal <= FirstDiagonal && ThirdDiagonal <= SecondDiagonal)
		SmalerDiagonal = ThirdDiagonal;

	if (SmalerDiagonal <= diametr)
		cout << "OK";
	else cout << "NO";
	return 0;
}