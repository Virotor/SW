#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cout << "n = ";
	cin >> n;
	int k;
	cout << "k = ";
	cin >> k;
    vector <int> a;
	int numeral;
	while (n != 0) {
		numeral = n % 10;
		n /= 10;
		a.push_back(numeral);
	}
	reverse(a.begin(), a.end());
	int vectorNumber = 0;
	if (k > a.size()) {
		cout << "error";
	}
	else {
		while (vectorNumber < k) {
			cout << a[vectorNumber];
			vectorNumber++;
		}
	}
	return 0;
}