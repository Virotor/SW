

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int day;
    cout << "Введите число: ";
    cin >> day;
    if (day >= 1 && day <= 7)
    {
        switch (day)
        {
        case 1:
            cout << "Ваш день - понедельник\n";
            break;
        case 2:
            cout << "Ваш день - вторник\n";
            break;
        case 3:
            cout << "Ваш день - среда\n";
            break;
        case 4:
            cout << "Ваш день - четверг\n";
            break;
        case 5:
            cout << "Ваш день - пятница\n";
            break;
        case 6:
            cout << "Ваш день - суббота\n";
            break;
        case 7:
            cout << "Ваш день - воскресенье\n";
            break;
        }

    }
    else { cout << "Ошибка|Введите корректное число" << endl; }
    return 0;
}


