#include <iostream>
#include <math.h>
#include <clocale>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "russian");
	cout << "Загаданный Пароль:\n";
	srand(time(0));
	char pass[5]{ rand() % (57 - 48 + 1) + 48, rand() % (57 - 48 + 1) + 48, rand() % (57 - 48 + 1) + 48, rand() % (57 - 48 + 1) + 48 };
	for (char i = '0'; i <= '9'; ++i)
		for (char j = '0'; j <= '9'; ++j)
			for (char k = '0'; k <= '9'; ++k)
				for (char t = '0'; t <= '9'; ++t)
					if (pass[0] == i && pass[1] == j && pass[2] == k && pass[3] == t)
						cout << i << j << k << t;
	return 0;
}