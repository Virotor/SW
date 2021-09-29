#include<iostream>
#include<math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int chisloK, chisloN, sootnPrim=1;
	cout << "¬ведите число n: ";
	cin >> chisloN;
	cout << "¬ведите число k: ";
	cin >> chisloK;
	while ((chisloN / sootnPrim) >= 1)
	{
		sootnPrim *= 10;
	}
	sootnPrim /= 10;
	while (chisloK >= 1)
	{
		cout << (chisloN / sootnPrim) % 10 << endl;
		sootnPrim /= 10;
		chisloK--;
	}
	

	return 0;
}