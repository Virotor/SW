#include <string>
#include <iostream>
using namespace std;
int main() {
    string n;
    int k;

    cout << "input n "; cin >> n;
    cout << "input k: "; cin >> k;
    cout << "Number is " << n.substr(0, k);
}
