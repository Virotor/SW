#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int widthOtv, widthPar, lengthOtv, lengthPar, heightOtv, heightPar;
	cout << "Введите ширину отверстия: ";
	cin >> widthOtv;
	cout << "Введите длину отверстия: ";
	cin >> lengthOtv;
	cout << "Введите высоту отверстия: ";
	cin >> heightOtv;
	cout << "Введите ширину параллелепипеда: ";
	cin >> widthPar;
	cout << "Введите длину параллелепипеда: ";
	cin >> lengthPar;
	cout << "Введите высоту параллелепипеда: ";
	cin >> heightPar;

	if ((lengthPar < lengthOtv && widthPar < widthOtv && heightPar < heightOtv) || (lengthPar < widthOtv && widthPar < lengthOtv && heightPar < heightOtv) || (lengthPar < heightOtv && widthPar < widthOtv && heightPar < lengthOtv) || (widthPar < heightOtv && lengthPar < widthOtv && heightPar < lengthOtv) || (heightPar < widthOtv && lengthPar < lengthOtv && widthPar < heightOtv) || (heightPar < widthOtv && lengthPar < heightOtv && widthPar < heightOtv))
	{
		cout << "Параллелепипед пройдет в отверстие\n";
	}
	else
	{
		cout << "Параллелепипед не пройдёт в отверстие\n";
	}
	return 0;
}
