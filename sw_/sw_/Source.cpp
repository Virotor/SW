#include <iostream>
#include <string>
#include <math.h>
using namespace std;


int ex1()
{
    int number;
    cout << "Enter a number | ";
    cin >> number;
    string nums = "";

    while (true)
    {
        if (number == 0) break;
        nums = to_string(number % 10) + "\n" + nums;
        number /= 10;
    }

    cout << nums << endl;
    return 0;
}


int ex2()
{
    int weekday;
    cout << "Enter a day of week (1 - 7) | ";
    cin >> weekday;
    bool check = true;

    while (check) {
        switch (weekday)
        {
        case 1: cout << "Monday" << endl;
            check = false;
            break;
        case 2: cout << "Tuesday" << endl;
            check = false;
            break;
        case 3: cout << "Wednesday" << endl;
            check = false;
            break;
        case 4: cout << "Thursday" << endl;
            check = false;
            break;
        case 5: cout << "Friday" << endl;
            check = false;
            break;
        case 6: cout << "Saturday" << endl;
            check = false;
            break;
        case 7: cout << "Sunday" << endl;
            check = false;
            break;

        }
    }
    return 0;
}


int ex3()
{
    int n, k;
    bool check = true;

    while (check) {
        cout << "\nEnter n | ";
        cin >> n;
        cout << "\nEnter k | ";
        cin >> k;

        int count_n = 0;
        int copy_n = n;

        while (true)
        {
            if (copy_n == 0) break;
            copy_n /= 10;
            count_n++;
        }


        if (count_n < k) {
            cout << "Enter that count of number n >= k" << endl;
            continue;
        }

        cout << "Firstly k number of numbers n |" << endl;

        for (int i = 0; i < k; i++)
        {
            cout << to_string(n)[i] << endl;
        }
        check = false;

    }
    n = (int)n;
    return 0;
}


int main()
{
    int ex; bool check = true;

    while (check) {
        cout << "\nEnter the exercise 1 - 1 (0 - exit) | ";
        cin >> ex;

        switch (ex)
        {
        case 1:
            cout << "\nEx 1\n" << endl;
            ex1();
            break;

        case 0:
            check = false;
            break;
        }
    }

    return 0;
}