#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, d;
    a = rand() % 10;
    b = rand() % 10;
    c = rand() % 10;
    d = rand() % 10;
    int n = 0;
    int numList[4] = {a,b,c,d};
    cout<<"Сгенерированный пароль : "<<a<<b<<c<<d<<endl;
    cout<<"Отгаданный пароль : ";
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
