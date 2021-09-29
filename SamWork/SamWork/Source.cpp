#include <iostream>
#include "math.h"
#include "time.h"
#include <cstdlib>
#include <string>
using namespace std;

int main() {
	string num;
	cout << "Number= ";    cin >> num;
	for (int i = 0; i < num.length(); i++) {
		cout << num[i] << endl;
	}
	system("pause");
	return 0;
}