#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int chislo, kolichestvoCifr;
	cout << "Введите число : "; cin >> chislo;
	cout << "Введите нужное кол-во цифр для вывода : "; cin >> kolichestvoCifr;
	int kol=1 , povtn;
	povtn = chislo;
	while ((chislo / kol) >= 1)
	{
		kol *= 10;
	}
	kol /= 10;
	while (kolichestvoCifr >= 1)
	{
		cout << (chislo / kol) % 10;
		kol /= 10;
		kolichestvoCifr--;
	}
}