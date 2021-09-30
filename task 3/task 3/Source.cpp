#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int n, discharge, m = 0;
    cout << "введите число " << endl;
    cin >> n;
    cout << "введите кол-во разрядов  " << endl;
    cin >> discharge;
    m = n;
    for (int i = 0;; i++)
    {
        if (m == 0)
        {
            m = i;
            break;
        }
        m /= 10;
    }
    for (int i = 0; i < m - discharge; i++)
    {
        n /= 10;
    }
    cout << n << endl;
    cout << endl;
    return 0;
}