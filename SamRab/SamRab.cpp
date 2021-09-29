#include <iostream>
#include <cmath>
using namespace std;

void number(int& number) {
    cout << "number = ";
    cin >> number;
    while (number) {
        cout << number % 10 << endl;
        number /= 10;
    }
}
int main() {
    int x;
    number(x);
    system("pause");
    return 0;
}
