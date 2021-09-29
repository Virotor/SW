#include <iostream>
using namespace std;
int main()
{
    long long int n, n1;
    int k, i;
    setlocale(LC_ALL, "RUS");
    cout << "Введите два числа n, k, Первое число будет основным, второе будет означать какое количество цифер первого будет выведено";
    cin >> n >> k;
    n1 = n;
    for (i = 0; n1 > 0; i++)
    {
        n1 /= 10;
    }
    i -= k;
    for (int j=i;j>0;j--)
    {
        n /= 10;
    }
    cout << n << endl;
    return 0;
}

