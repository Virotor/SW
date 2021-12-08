#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int n, a, b = 0;
    cout << "Введите число" << endl;
    cin >> n;
    while (n > 0)
    {
        a = n % 10;
        b = b * 10 + a;
        n = n / 10;
    }
    while (b > 0)
    {
        cout << b % 10 << " " << endl;
        b = b / 10;
    }
}