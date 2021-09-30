#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, d;
    a = rand() % 9;
    b = rand() % 9;
    c = rand() % 9;
    d = rand() % 9;
    int n = 0;
    int numList[4] = {a,b,c,d};
    cout<<"Сгенерированное число : "<<a<<b<<c<<d<<endl;
    cout<<"Отгаданное число : ";
    for (int i = 0; i < 4; i++)
    {   
        for (int k = 0; k < numList[i]; k++)
        {
            n++;
            if (n == numList[i]) 
            {
            cout<<n;
            n = 0;
            }  
        }
    }
    cout<<endl;
    return 0;
}