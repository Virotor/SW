#include <iostream>
using namespace std;
int main()
{
    int a, k, number, q,ind,g;
    cin >> number >>ind;
    if (number == 0) // number=0?
    {
        cout << 0 << endl;
        exit;
    }
    q = 0;
    if (number < 0) // number<0?
    {
        number = number * (-1);
        q++;
    }
    k = 0; a = number;
    while (a > 0) //подсчёт кол-ва разрядов
    {
        k++; a = a / 10;
    };
    g = 0;
    while (k > 0) //вывод чисел от "сотен к десяткам"
    {

        cout << trunc(number / pow(10, k - 1));//Вывод левого разряда
        number = number - trunc(number / pow(10, k - 1)) * pow(10, k - 1);
        k--;
        g++; if (g == ind)
        {
            break;
        };
    }

    if (q == 1)
    {
        cout << "-" << endl;
    }
    return 0;
}