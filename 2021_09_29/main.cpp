/**
      ---------------------------------------------------
      |         Made by Shamal Viktor (@j3uktop)        |
      |           2019-2021 - Lyceum BSU - IM           |
      |             2021 - BSUIR - FCP - PMS            |
      |          *** All rights reserved ***            |
      ---------------------------------------------------
                                            			**/
#include <iostream>

using std::cout;
using std::cin;

void task1();
void task2();
void task3();
void task4();
void task5();

int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    return 0;
}

void task1() {
    long long value;
    cout << "Task1:\n";
    cout << "Value = ";
    cin >> value;
    cout << "Digits of value:\n";
    while(value) {
        cout << value % 10 << '\n';
        value /= 10;
    }
    cout << "Task1 is completed\n";
}

void task2() {
    cout << "Task2:\n";
    cout << "Enter the number of the day of the week (1-7)\n";
    cout << "Day = ";
    int day_number;
    cin >> day_number;
    switch(day_number) {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        case 7:
            cout <<  "Sunday\n";
            break;
        default:
            cout << "Input error\n";
    }
    cout << "Task2 is completed\n";
}

void task3() {

}

void task4() {

}

void task5() {

}