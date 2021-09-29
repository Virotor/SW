#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    long long int number;

    cout << "Введите целое число" << endl;
    cin >> number;
    number = abs(number);

    while (number)
    {
        cout << number % 10 << endl;
        number /= 10;
    }
}