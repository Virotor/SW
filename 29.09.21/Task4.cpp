
#include <iostream>
using namespace std;
int main()
{
    int a,b,h,l,s;
    cout << "enter the hole dimensions a,b:";
    cin >> a >>b;
    cout << "enter the dimensions of the paralleiepiped l,s,h:";
    cin >> l >>s >>h;
    int S = a*a +  b*b;
    if (h*h+l*l == S or (l*l+s*s) == S or (h*h+s*s) == S)
    {
        cout << "yes";
    }
    else { cout << "no"; }


   

}
