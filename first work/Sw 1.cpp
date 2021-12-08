#include "pch.h"
#include <iostream>
#include "math.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, i;
    cout << "введите число "; cin >> n;
    while (n != 0) 
    {
        i = n % 10;
        n = n / 10;
        cout << i << endl;
    }
    return 0;
}
