#include "pch.h"
#include <iostream>
#include "math.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, b, c, a1, b1;
	cout << "введите высоту отверстия "; cin >> b1;
	cout << "введите ширину отверстия "; cin >> a1;
	cout << "введите ширину параллелипипеда "; cin >> a;
	cout << "введите высоту параллелипипеда "; cin >> b;
	cout << "введите длинну параллелипипеда "; cin >> c;
	if (a > 0 || b > 0 || c > 0 || a1 > 0 || b1 > 0)
	{
		if (c <= b1 && a <= b1 || b <= a1) cout << "вот так вот так вот так пойдешь";
		else if (c <= a1 && a <= b1 || b <= b1) cout << "вот так вот так вот так пойдешь";
		else if (a <= b1 && a <= a1 || b <= a1) cout << "вот так вот так вот так пойдешь";
		else if (a <= a1 && a <= b1 || b <= b1) cout << "вот так вот так вот так пойдешь";
		else if (b <= b1 && a <= a1 || b <= a1) cout << "вот так вот так вот так пойдешь";
		else if (b <= a1 && a <= b1 || b <= b1) cout << "вот так вот так вот так пойдешь";
		else cout << "не брат не получится";
	}
	else cout << "меняй числа";
	
	return 0;
}