
#include <iostream>
using namespace std;
int main()
{
    int a,b,h,l,s;
    cout << "enter the hole dimensions a,b:";
    cin >> a >>b;
    cout << "enter the dimensions of the paralleiepiped l,s,h:";
    cin >> l >>s >>h;
    int S = a * b;
    if (l * s == S or s * h == S or l * h == S)
    {
        cout << "yes";
    }
    else { cout << "no"; }


   

}
