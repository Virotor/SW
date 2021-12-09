
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "rus");
    int a;
    cout << "Введите номер дня: ";
    cin >> a;
    while (a < 1 || a>7)
    {
        cout << a << " дня недели не существует" << endl;
        cout << "Введите число от 1 до 7: ";
        cin >> a;
    }
    switch (a)
    {
    case 1:
        cout << "Понедельник";
        break;
    case 2:
        cout << "Вторник";
        break;
    case 3:
        cout << "Среда";
        break;
    case 4:
        cout << "Четверг";
        break;
    case 5:
        cout << "Пятница";
        break;
    case 6:
        cout << "Суббота";
        break;
    case 7:
        cout << "Воскресенье";
        break;
    }
    return 0;
}
