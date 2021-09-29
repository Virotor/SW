#include <iostream>
using namespace std;

int main() {
    int n, k, i, temp;
    cout << "Введите n " << endl;
    cin >> n;
    cout << "Введите k " << endl;
    cin >> k;
    temp = n;
    for (i = 0; temp > 0; i++) {
        temp /= 10;
    }
    i -= k;
    for (int j = i; j > 0; j--) {
        n /= 10;
    }
    cout << n << endl;
    return 0;
}
