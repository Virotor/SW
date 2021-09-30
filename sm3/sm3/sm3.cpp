#include <iostream>
#include<math.h>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int k, n, z, c, i, v;
	
	while (true) {
		cout << "Введите 2 числа, первое больше второго" << endl;
		cin >> n >> k;
		if (n > k) {
			z = 1;
			v = n;
			while ((v /= 10) > 0) z++;
			c = z - k;
			i = n / pow(10, c);
			cout << i << endl;
			break;
		}
		else cout << "Числа не подходят" << endl;
		

	}
	return 0;
}
