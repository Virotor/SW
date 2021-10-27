#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    string number;
    cout << "Введите число: ";
    cin >> number;
    for (int i = 0; i < size(number); i++)
        cout << number[i] << endl;
    return 0;
}