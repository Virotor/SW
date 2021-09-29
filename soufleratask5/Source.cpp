#include <iostream>

using namespace std;

int main()

{
	char ch1, ch2, ch3, ch4;

	int usl1, usl2, usl3, usl4, c1 = 0, c2 = 0, c3 = 0, c4 = 0;

	setlocale(LC_ALL, "RUS");

	srand(time(0));

	ch1 = char('0' + rand() % ('9' - '0'));

	ch2 = char('0' + rand() % ('9' - '0'));

	ch3 = char('0' + rand() % ('9' - '0'));

	ch4 = char('0' + rand() % ('9' - '0'));

	usl1 = (int)ch1 - 48;

	usl2 = (int)ch2 - 48;

	usl3 = (int)ch3 - 48;

	usl4 = (int)ch4 - 48;

	while (c1 < usl1)

		c1 = ++c1;

	while (c2 < usl2)

		c2 = ++c2;

	while (c3 < usl3)

		c3 = ++c3;

	while (c4 < usl4)

		c4 = ++c4;

	cout << c1 << c2 << c3 << c4;
	return (0);
}