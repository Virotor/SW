#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c, d;
    cout << "Введите число = ";
    cin >> a;
    cout << "Сколько чисел вы хотите вернуть? = ";
    cin >> b;
    c = a;
    d = 1;
    while (c /= 10)
    {
        d++;
    }

    if (a > 0 && b > 0)
    {
        b = pow(10, d - b);
        a /= b;
        cout << a;
    }
    else
    {
        cout << "Неверный ввод" << endl;
        return 0;
    }
    cout << endl;
    system("pause");
    return 0;

}