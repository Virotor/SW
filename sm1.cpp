#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int kolvo, cifra, chislo, i,b;
	cout << "Vvedite chislo" << endl;
	cin >> chislo;
	chislo = abs(chislo);
	b = chislo;
	kolvo = 1;
	while ((b /= 10) > 0) kolvo++;
	for (i = kolvo; i > 0;i--) {
		cifra = chislo / pow(10,i-1);
		cout << c<<endl;
		chislo =chislo-cifra* pow(10, i-1);
	}
	return 0;
}



