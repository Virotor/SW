#include "pch.h"
#include <iostream>
using namespace std;

int K_D(int n, int k); // прототип

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    cout << "¬ведите число: ";
    unsigned long number, cifra;
    cin >> number;
    cout << " сколько первых цифр? ";
    cin >> cifra;
    cout << K_D(number, cifra) << endl;
    system("pause");
    return 0;
}

int K_D (int n, int k)
{
    int n1 = n,
        CD = 0;
    while (n1)
    {
        n1 /= 10;
        CD++; 
    }
    for (int counter = 0; counter < (CD - k); counter++)
        n /= 10;

    return n;
}