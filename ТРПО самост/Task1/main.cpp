#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a;
    cout << "Введите число" << endl;
    cin >> a;
    int delitel = 1;
    while ((a / delitel) >= 1) {
        delitel = delitel * 10;
    }
    delitel = delitel / 10;
    while (delitel >= 1) {
        cout << (a / delitel) % 10 << endl;
        delitel = delitel / 10;
    }
return 0;
}
