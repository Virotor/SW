#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m;
    cout<<"Введите целое число"<<endl;
    cin>>n;
    for (int i = 0; n > i; n /= 10)
    {
        m = n%10;
        cout<<m<<endl;
    }
    return 0;
}