#include <iostream>
using namespace std;

int first(int n, int k)
{
    if (k <= 0) return -1;
    int temp = 0, rez = 0, pow10 = 0;
    n = abs(n);
    while (n > 0)
    {
        temp = temp * 10 + n % 10;
        n /= 10;
        ++pow10;
    }

    if (k > pow10) k = pow10;

    for (int i = 0; i < k; ++i)
    {
        rez = rez * 10 + temp % 10;
        temp /= 10;
    }

    return rez;
}


int main()
{
    int n, k;
    cout << "n:"; cin >> n;
    cout << "k:"; cin >> k;
cout << first(n, k) << std::endl;
    return 0;
}