#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, c, r;
    bool tf = false;
    cout << "Введите размеры параллелепипеда ";
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c  = "; cin >> c;
    cout << "Введите радиус отверстия ";
    cout << "r = "; cin >> r;
    if(pow(a * a + c * c, 0.5)<2*r) tf = true;
    if (pow(a * a + c * c, 0.5) < 2*r) tf = true;
    if (pow(c * c + b * b, 0.5) < 2*r) tf = true;
    switch (tf) {
    case true: {cout << "Пройдёт" << endl; } break;
    case false: {cout << "Не пройдёт" << endl; } break;
    }
    return 0;
}
