#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int num, raz, n = 0;
    cout << "Введите число: " << endl;
    cin >> num;
    cout << "Введите количество разрядов:  " << endl;
    cin >> raz;
    n = num;
    for (int i = 0;; i++)
    {
        if (n == 0)
        {
            n = i;
            break;
        }
        n /= 10;
    }
    for (int i = 0; i < n - raz; i++)
    {
        num /= 10;
    }
    cout << "Результат: " << num << endl;
    cout << endl;
    return 0;
}