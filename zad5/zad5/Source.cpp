#include <iostream>
using namespace std;
int main()
{
	char chislo1, chislo2, chislo3, chislo4;
	int usl1, usl2, usl3, usl4, cifra1 = 0, cifra2 = 0, cifra3 = 0, cifra4 = 0;
	setlocale(LC_ALL, "RUS");
	srand(time(0));
	chislo1 = char('0' + rand() % ('9' - '0'));
	chislo2 = char('0' + rand() % ('9' - '0'));
	chislo3 = char('0' + rand() % ('9' - '0'));
	chislo4 = char('0' + rand() % ('9' - '0'));
	usl1 = (int)chislo1 - 48;
	usl2 = (int)chislo2 - 48;
	usl3 = (int)chislo3 - 48;
	usl4 = (int)chislo4 - 48;
	while (cifra1 < usl1)
		cifra1 = ++cifra1;
	while (cifra2 < usl2)
		cifra2 = ++cifra2;
	while (cifra3 < usl3)
		cifra3 = ++cifra3;
	while (cifra4 < usl4)
		cifra4 = ++cifra4;
	cout << cifra1 << cifra2 << cifra3 << cifra4;
	return 0;
}