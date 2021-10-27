#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	int day;
	cout << "Ââåäèòå íîìåð äíÿ íåäåëè." << endl;
	cin >> day;
	if (day > 0 && day < 8) {
		switch (day)
		{
		case 1:
			cout << "Ïîíåíèê" << endl << endl;
			break;
		case 2:
			cout << "Âòîíèê" << endl << endl;
			break;
		case 3:
			cout << "Ñðà" << endl << endl;
			break;
		case 4:
			cout << "×âåðã" << endl << endl;
			break;
		case 5:
			cout << "Ïÿèèöà" << endl << endl;
			break;
		case 6:
			cout << "Ñóááîòà" << endl << endl;
			break;
		case 7:
			cout << "Âîñåíüå" << endl << endl;
			break;
		default:
			break;
		}
	}
	else { cout << "îìàíäà íå âûïîëíÿåòñÿ" << endl; }
	return 0;
}