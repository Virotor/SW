#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    {
        setlocale(LC_ALL, "RUS");
        cout << "RAND_MAX = " << RAND_MAX << endl; // ���������, �������� ������������ ������ �� ��������� ��������� �����
        cout << "random number = " << rand() << endl; // ������ ���������� ��������� �����
        system("pause");
        return 0;
    }
}
