#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    long long int n, clone;
    int k, i;

    cout << "Введите n и k" << endl;
    cin >> n >> k;

    clone = n;

    for (i = 0; clone > 0; i++)
    {
        clone /= 10;
    }

    i -= k;

    for (int j = i; j > 0; j--)
    {
        n /= 10;
    }

    cout << n << endl;

    return 0;
}
