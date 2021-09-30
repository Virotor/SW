#include <iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int k, n, kolvo, ostkolvo, chislo, v;
	
	while (true) {
		cout << "Введите 2 числа, первое больше второго" << endl;
		cin >> n >> k;
		if (n > k) {
			kolvo = 1;
			v = n;
			while ((v /= 10) > 0) kolvo++;
			ostkolvo = kolvo - k;
			chislo = n / pow(10, ostkolvo);
			cout << chislo << endl;
			break;
		}
		else cout << "Числа не подходят" << endl;
		

	}
	return 0;
}
