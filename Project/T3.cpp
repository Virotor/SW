#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;

int main()
{
    int n, k, i = 0;
    stringstream dd;
    cout<<"Введите n\n";
    cin>>n;
    cout<<"Введите k\n";
    cin>>k;
    dd<<n;
    while (i != k)
    {
        cout<<dd.str()[i];
        i++;
    }
    cout<<endl;
    return 0;
}