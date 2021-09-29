/**
      ---------------------------------------------------
      |         Made by Shamal Viktor (@j3uktop)        |
      |           2019-2021 - Lyceum BSU - IM           |
      |             2021 - BSUIR - FCP - PMS            |
      |          *** All rights reserved ***            |
      ---------------------------------------------------
                                            			**/
#include <iostream>
#include <conio.h>
#include <time.h>

using std::cout;
using std::string;
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
    system("pause");
    return 0;
}

void task1() {
    long long value;
    cout << "Task1:\n";
    cout << "Value = ";
    cin >> value;
    cout << "Digits of value:\n";
    while (value) {
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
    switch (day_number) {
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
            cout << "Sunday\n";
            break;
        default:
            cout << "Input error\n";
    }
    cout << "Task2 is completed\n";
}

void task3() {
    long long value;
    long long out_digits;
    long long count_of_digits = 0;
    long long out_value = 0;
    long long mod = 1;
    cout << "Task3:\n";
    cout << "Value = ";
    cin >> value;
    cout << "K = ";
    cin >> out_digits;
    out_value = value;
    while(value) {
        value /= 10;
        count_of_digits++;
    }
    for(int i = out_digits; i < count_of_digits; i++) {
        mod *= 10;
    }
    if(count_of_digits < out_digits) {
        cout << "Error. Count of digits in value is too small\n";
        cout << "Try again? Y/N\n";
        char user_answ = getche();
        if(user_answ == 'Y' || user_answ == 'y') {
            task3();
        } else {
            cout << "Task3 is completed\n";
        }
    } else {
        out_value /= mod;
        cout << out_value << '\n';
        cout << "Task3 is completed\n";
    }
}

void task4() {
    cout << "Task4:\n";
    cout << "Enter the dimensions of the parallelepiped:\n";
    long long object_dimensions[3] = {0, 0, 0};
    cout << "Object height = ";     cin >> object_dimensions[0];
    cout << "Object length = ";     cin >> object_dimensions[1];
    cout << "Object width = ";      cin >> object_dimensions[2];
    cout << "Enter the dimensions of hole:\n";
    long long hole_dimensions[2] = {0, 0};
    cout << "Hole length = ";       cin >> hole_dimensions[0];
    cout << "Hole width = ";        cin >> hole_dimensions[1];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i == j) {
                continue;
            }
            if(object_dimensions[i] <= hole_dimensions[0] && j[object_dimensions] <= hole_dimensions[1]) {
                cout << "Yes, the parallelepiped will pass through the hole\n";
                cout << "Task4 is completed\n";
                return;
            }
        }
    }
    cout << "The parallelepiped will not pass through the hole\n";
    cout << "Task4 is completed\n";
}

void task5() {
    srand(time(NULL));
    string real_pass = "";
    for(int i = 0; i < 4; i++) {
        real_pass += rand() % 10 + '0';
    }
    string my_pass = "0000";
    cout << "Task5:\n";
    while(my_pass[0] < '9' + 1) {
        if(my_pass == real_pass) {
            cout << "Password: " << my_pass << '\n';
            cout << "Task5 is completed\n";
            return;
        }
        int j = 3;
        my_pass[j]++;
        while(my_pass[j] > '9' && j > 0) {
            my_pass[j - 1]++;
            my_pass[j] = '0';
            j--;
        }
        if(j == 0 && my_pass[0] == '9') {
            my_pass[0]++;
        }
    }
    cout << "Password not founded\n";
    cout << "Task5 is completed with some error\n";
}