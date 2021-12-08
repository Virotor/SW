#include <iostream>
#include <math.h>
using namespace std;
int main() {
// 4 задание
	setlocale(LC_ALL, "RUS");
	double length, width, height, r;
	int с;
	cout << "¬ведите радиус отверсти€ - "; cin >> r;
	cout << "¬ведите длину параллелепипеда - "; cin >> length;
	cout << "¬ведите ширину параллелепипеда - "; cin >> width;
	cout << "¬ведите высоту параллелепипеда - "; cin >> height;
	if (((pow(length * length + width * width, 0.5)) <= r * 2) || ((pow(height * height + width * width, 0.5)) <= r * 2) || ((pow(length * length + height * height, 0.5)) <= r * 2)) {
		с = 0;
	}
	else {
		с = 1;
	}
	switch (с) {
	case 0:
		cout << "ѕараллелепипед пройдЄт в отверстие" << endl;
		break;
	case 1:
		cout << "ѕараллелепипед не пройдЄт в отверстие" << endl;
		break;
	}
	return 0;
}