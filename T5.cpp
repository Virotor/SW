#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int a[4], b[4], i, j;
	srand(time(0));
	for (i = 0;i < 4;i++) {
		a[i] = rand() % 10;
	}
	for (i = 0;i < 4;i++)
		for (j = 0;j < 10;j++)
			if (a[i] == j) b[i] = j;
	for (i = 0;i < 4;i++)
		cout << b[i];
}