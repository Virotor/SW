#include <string>
#include <iostream>
using namespace std;
int main() {
    string n;
    int k;

    cout << "Enter n: "; cin >> n;
    cout << "Enter k: "; cin >> k;
    cout << "Number - " << n.substr(0, k);
}