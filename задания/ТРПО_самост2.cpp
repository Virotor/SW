#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	int n;
	cout << "Vyberite nomer dnya nedeli: " << endl;
	cin >> n;
	switch (n)
	{
	case 1:
		cout << "Vy vybrali ponedel'nik" << endl;
		break;
	case 2:
		cout << "Vy vybrali vtornik" << endl;
		break;
	case 3:
		cout << "Vy vybrali sredu" << endl;
		break;
	case 4:
		cout << "Vy vybrali chetverg" << endl;
		break;
	case 5:
		cout << "Vy vybrali pyatnitsu" << endl;
		break;
	case 6:
		cout << "Vy vybrali subbotu" << endl;
		break;
	case 7:
		cout << "Vy vybrali voskresen'ye" << endl;
		break;
	default:
		cout << "Ne sushchestvuyet dnya nedeli dlya takogo nomera" << endl;
	}
	return 0;
}