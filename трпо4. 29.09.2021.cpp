// трпо3. 29.09.2021.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    double l, D, d1, d2, d3, x, y, h,pi;
    pi = 3, 141592653589;
    cout << "длинна(x) паралелепипела:";
    cin >> x;
    cout << "длинна(l) окружности:";
    cin >> l;
    cout << "ширина(y):";
    cin >> y;
    cout << "Высота(h):";
    cin >> h;
    D = l / pi;
    d1 = sqrt(x * x + y * y);
    d2= sqrt(x * x + h*h);
    d3= sqrt(h* h + y * y);
    if ((D > d1), (D > d2), (D > d3))
    {
        cout << "Войдет";

    }
    else
    {
        cout << "Нет";
    }
    return 0;

 }

