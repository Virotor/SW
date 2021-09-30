#include <iostream>;
#include <locale.h>;
#include <sstream>;
using namespace std;
int main() {
	string s;
	char symbol1, symbol2, symbol3, symbol4;
	symbol1 = rand() % 10 + 48;
	symbol2 = rand() % 10 + 48;
	symbol3 = rand() % 10 + 48;
	symbol4 = rand() % 10 + 48;
	char arr[4] = { symbol1, symbol2, symbol3, symbol4 };
	s = string(arr);
	int a;
	int x = 0;
	stringstream ss;
	ss << s;
	ss >> a;
	cout << a << endl;
	int array[4];
	for (int i = 3; i >= 0; i--) {
		array[i] = a % 10;
		a /= 10;
	}
	cout << "Password:";
	for (int i = 0; i <= 3; i++) {
		for (x; x != array[i]; x++) {
		}
		cout << x;
	}

	return 0;
}