#include <iostream>
#include <ctime>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	string s = "";
	int pass = 0, count = 0, k = -1;
	for (int i = 0; i < 4; i++) 
	{
		int num = 48 + rand() % 9;
		s += (char)num;
	}
	cout << "Сгенерированный пароль: " << s << endl;
	while (true) 
        {
		k++;
		if (s[k] != '0') break;
		if (s[k] == '0') count++;
	}
	for (int i = 0; i < 4; i++) 
	{
		pass *= 10;
		pass += (int)s[i] - 48;
	}
	for (int i = 1; i < 10000; i++) 
	{
		if (pass == i) {
			cout << "Подобранный пароль: ";
			for (i = 0; i < count; i++) cout << 0;
			cout << pass;
			return 0;
		}
	}
}