#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int number, discharge, m = 0;
    cout << "Введите число: " <<endl;
    cin >> number;
    cout << "Сколько разрядов показать?  " << endl;
    cin >> discharge;
    m = number;
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
        number /= 10;
    }
    cout <<"Ваше число: "<< number << endl;
    cout << endl;
    return 0;
}