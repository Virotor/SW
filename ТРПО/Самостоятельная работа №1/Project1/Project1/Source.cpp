#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int chisloVvoda, sootnPrim = 1;
	setlocale(LC_ALL, "RUS");
	cout << "¬ведите число : ";
	cin >> chisloVvoda;
	
	while ((chisloVvoda / sootnPrim) >= 1)
	{
		sootnPrim *= 10;
	}
	sootnPrim=sootnPrim/ 10;
	while (sootnPrim >= 1)
	{
		cout << (chisloVvoda / sootnPrim) % 10 << endl;
		sootnPrim = sootnPrim / 10;
	}
	return 0;
}