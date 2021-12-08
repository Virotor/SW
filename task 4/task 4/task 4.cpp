#include<iostream>
using namespace std;
int main()                                      
{
	setlocale(LC_ALL, "ru");
	int lO, sO;                                             

	cout << "Введите длину отверстия - "; cin >> lO;
	cout << "Введите ширину отверстия - "; cin >> sO;
	int lF, sF, vF;
	cout << "Введите длину фигуры - "; cin >> lF;
	cout << "Введите ширину фигуры - "; cin >> sF;
	cout << "Введите высоту фигуры - "; cin >> vF;
	if (((lO >= lF && sO >= sF) || (lO >= sF && sO >= lF)) ||
		((lO >= lF && sO >= vF) || (lO >= vF && sO >= lF)) ||
		((lO >= vF && sO >= sF) || (lO >= sF && sO >= vF))) {
		cout << "Параллелепипед пройдёт в отверстие" << endl;
	}
	else {
		cout << "Параллелепипед не пройдёт в отверстие" << endl;
	}
	system("pause");
	return 0;

}
