#include <iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	int Width, Height, width, height, length;
	cout << "Введите значения ширины и высоты отверстия; ширины, высоты и длины параллелограмма" << endl;
	cin >> Width >> Height >> width >> height >> length;
	if ((Width >= width && Height >= height) ||
		(Width >= width && Height >= length) ||
		(Width >= height && Height >= width) ||
		(Width >= height && Height >= length) ||
		(Width >= length && Height >= width) ||
		(Width >= length && Height >= height)) cout << "Пройдёт";
	else cout << "Не пройдёт";
	return 0;
}