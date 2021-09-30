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