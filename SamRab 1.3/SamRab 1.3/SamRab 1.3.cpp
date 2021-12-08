#include <iostream>
#include <string>

using namespace std;

int main() {
	string n;
	cout << "n = "; cin >> n;
	int k;
	cout << "k = "; cin >> k;
	if (k <= size(n) and k > 0)
	{ 
		if (n[0] == '-') {
			cout << "-";
			for (int i = 1; i <= k; i++) cout << n[i];
		}
	    else for (int i = 0; i < k; i++) cout << n[i];
	}
	else cout << "Error";
	return 0;
}