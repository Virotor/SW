#include<iostream>
using namespace std;
int main()
{
    double a, b, c, a1, b1;
    cout << "Enter length of parallelepiped= "; cin >> c;
    cout << "Enter height of parallelipiped= "; cin >> b;
    cout << "Enter weight of parallelipiped= "; cin >> a;
    cout << "Enter hole width= "; cin >> a1;
    cout << "Enter hole height= "; cin >> b1;
    if (a > 0 && b > 0 && c > 0 && a1 > 0 && b1 > 0) {
        if (c <= b1 and a <= a1 or b <= a1) cout << "oke";
        else if (c <= a1 and a <= b1 or b <= b1) cout << "oke";
        else if (a <= b1 and a <= a1 or b <= a1) cout << "oke";
        else if (a <= a1 and a <= b1 or b <= b1) cout << "oke";
        else if (b <= b1 and a <= a1 or b <= a1) cout << "oke";
        else if (b <= a1 and a <= b1 or b <= b1) cout << "oke";
        else cout << "NOPE";
    }
    else cout << "ERROR";
    return 0;
}
