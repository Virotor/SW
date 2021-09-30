#include <iostream>
using namespace std;


int main()
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

    return 0;
}