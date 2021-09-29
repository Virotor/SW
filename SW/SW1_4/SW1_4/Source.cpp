#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    double a, b, h, b1, h1;
    cout << "Введите a:"; cin >> a;
    cout << "Введите b:"; cin >> b;
    cout << "Введите h:"; cin >> h;
    cout << "Введите b1:"; cin >> b1;
    cout << "Введите h1:"; cin >> h1;

    if (b < b1 && h < h1)
        cout << "Пройдёт.";
    else
        cout << "Не пройдёт.";
}