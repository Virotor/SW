
#include <iostream>

using namespace std;
int main()
{
    int a, c, l;
    cout << "enter a number :";
    cin >> a;
    l = a;
    int i = 0;
    do
    {
        l /= 10;
        i++;
    } while (l > 0);
    cout << "\n";
    int f;
    for (int d = i; d >= 1; d--)
    {

        f = pow(10, d - 1);
        c = (a / f) % 10;
        cout << c << "\t";
    }
    return 0;
}