#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c, d, k;

    cout << "Введите длину параллелепипеда = ";
    cin >> a;
    cout << "Введите ширину параллелепипеда = ";
    cin >> b;
    cout << "Введите высоту параллелепипеда = ";
    cin >> c;
    cout << "Введите длину длину отверстия = ";
    cin >> d;
    cout << "Введите ширину отверстия = ";
    cin >> k;
    if (a <= d && b <= k || c <= d && b <= k || c <= d && a <= k || b <= d && a <= k || b <= d && c <= k || a <= d && c <= k)
        cout << "Параллелепипед влазит в отверстие ";
    else
        cout << "Параллелепипед слишком большой";
    cout << endl;
    system("pause");
    return 0;
}