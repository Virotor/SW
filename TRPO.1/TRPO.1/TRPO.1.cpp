#include <iostream>
#include <math.h>
#include <string>
#include <ctime>
using namespace std;


void zadanie1()
{
    int number, x1, x2, x3;
    cout << "\nEnter a three-digit number: ";
    cin >> number;
    x1 = number / 100;
    number %= 100;
    x2 = number / 10;
    number %= 10;
    x3 = number;
    cout << x1 << "\n";
    cout << x2 << "\n";
    cout << x3 << "\n";
}


void zadanie2()
{
    int day;
    cout << "Введите номер дня: ";
    cin >> day;

    switch (day)
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

    default:
        cout << "Ошибка";
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    int a;
    cout << "Enter a task number(1-5): ";
    cin >> a;

    switch (a)
    {
    case 1:
        zadanie1();
        break;
    case 2:
        zadanie2();
        break;
    }
}