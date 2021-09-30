
#include <iostream>
using namespace std;


int main()
{
    int a, i, pass[4];
    for (i = 0; i < 4; i++)
    {
        pass[i] = rand() % 10;

    }
    cout << "password is : ";
    for (i = 0; i < 4; i++)
    {
        for (a = 0; a < 10; a++)
        {
            if (a == pass[i]) cout << a;
        }

    }
    return 0;
}