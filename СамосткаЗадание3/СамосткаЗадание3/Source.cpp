#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main() {
//3 задание
	setlocale(LC_ALL, "RUS");
	int n, k;
	cout << "¬ведите число - ";  cin >> n;
	cout << "¬ведите, какое количество первых знаков первого числа нужно вывести - "; cin >> k;
	k = to_string(n).length() - k;
	n /= pow(10, k);
	cout << n << endl;
	return 0;
}