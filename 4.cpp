#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int par1, par2, par3, parhole1, parhole2, parhole3;
	setlocale(LC_ALL, "RUS");
	cout << "¬ведите параметры параллелепипеда: ";
	cin >> par1 >> par2 >> par3;
	cout << "¬ведите параметры дыры: ";
	cin >> parhole1 >> parhole2 >> parhole3;
	double figure[3] = { par1,par2,par3 };
	double hole[3] = { parhole1,parhole2,parhole3 };
	sort(figure, figure + 3);
	sort(hole, hole + 3);
	if (figure[0] <= hole[0] && figure[1] <= hole[1] && figure[2] <= hole[2])
		cout << "‘игура поместитс€ в дыру" << endl;
	else
		cout << "‘игура не поместитс€ в дыру" << endl;
	system("pause");
	return 0;
}


