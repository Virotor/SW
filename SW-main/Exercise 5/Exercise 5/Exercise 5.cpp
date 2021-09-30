

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, x, y, z, i;
    a = rand() % 11;
    b= rand() % 11;
    c = rand() % 11;
    d = rand() % 11;

    for (x = 0; x <= a; x++)
    {
        x = x;
        if (x == a)
        {
            cout << x;
        }
    }
    for (y = 0; y <= b; y++)
    {
        y = y;
        if (y == b)
        {
            cout << y;
        }  
    }
    for (z = 0; z <= c; z++)
    {
        z = z;
        if (z == c)
        {
            cout << z;
        }
    }
    for (i = 0; i <= d; i++)
    {
        i = i;
        if(i == d)
        {
            cout << i;
        }
    }

}


