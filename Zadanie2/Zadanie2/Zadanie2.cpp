#include <iostream>
#include <chrono>
using namespace std;
int main()

{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Введите номер недели = ";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Понедельник\n";
        break;
    case 2:
        cout << "Вторник\n";
        break;
    case 3:
        cout << "Среда\n";
        break;
    case 4:
        cout << "Четверг\n";
        break;
    case 5:
        cout << "Пятница\n";
        break;
    case 6:
        cout << "Суббота\n";
        break;
    case 7:
        cout << "Воскресенье\n";
        break;
    }
    return 0;
}