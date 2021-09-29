#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    {
        setlocale(LC_ALL, "RUS");
        cout << "RAND_MAX = " << RAND_MAX << endl; // константа, хранящая максимальный предел из интервала случайных чисел
        cout << "random number = " << rand() << endl; // запуск генератора случайных чисел
        system("pause");
        return 0;
    }
}
