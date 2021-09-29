#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int dlina1, shirina1, visota2, shirina2, dlina2, glubina1;
	cout << "Введите длину отверстия : "; cin >> dlina1;
	cout << "Введите ширину отверстия : "; cin >> shirina1;
	cout << "Введите глубину отверстия : "; cin >> glubina1;
	cout << "Введите высоту параллелепипеда : "; cin >> visota2;
	cout << "Введите ширину параллелепипеда : "; cin >> shirina2;
	cout << "Введите длину параллелепипеда : "; cin >> dlina2;
	if (((glubina1 >= shirina2) and (dlina2 <= dlina1) and (shirina1 >= visota2)) || ((glubina1 >= shirina2) and (dlina2 <= shirina1) and (visota2 <= dlina1))
		|| ((glubina1 >= dlina2) and (visota2 <= dlina1) and (shirina1 >= shirina2)) || ((glubina1 >= dlina2) and (shirina2 <= dlina1) and (shirina1 >= visota2))
		|| ((glubina1 >= visota2) and (shirina2 <= dlina1) and (shirina1 >= dlina2)) || ((glubina1 >= visota2) and (dlina2 <= dlina1) and (shirina1 >= shirina2)))
	{
		cout << "Поместится";
	}
	else cout << "Не поместится";


}