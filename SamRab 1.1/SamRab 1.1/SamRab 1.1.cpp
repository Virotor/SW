#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cout << "number = "; cin >> s;
	if (s[0] == '-') // если первым символом в строке будет минус то он выведется вместе с первой цифрой
	{
		cout << "-";
		for (int i = 1; i < size(s); i++) cout << s[i] << endl;
	}
	else for (int i = 0; i < size(s); i++) cout << s[i] << endl;
	return 0;
}