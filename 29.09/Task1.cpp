
#include <iostream>
using namespace std;
int main()
{
    int a, n=1;
    cout << "enter a:";
    cin >> a;

    for (int d=10;n>0;d*=1)
    {       
        n = a / d;
      
        cout << a % d <<endl;   
        a /= 10;
     

        }
    
}


