
#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "rus");
	int a, b, c, d, e;
	cout << "Длина отверстия ";
	cin >> a;
	cout << "Ширина отверстия ";
	cin >> b;

	cout << "Длина параллелепипеда ";
	cin >> c;
	cout << "Ширина параллелепипеда ";
	cin >> d;
	cout << "Высота параллелепипеда ";
	cin >> e;
	if (a < c || b < e)
		cout << "Параллелепипед не проходит через отверстие ";
	else cout << "Параллелепипед проходит через отверстие ";

	return 0;
}


