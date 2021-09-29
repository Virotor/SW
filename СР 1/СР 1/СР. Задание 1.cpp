#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "a= ";
    cin >> a;
    while (a) {
        cout << a % 10 << endl; 
        a = a / 10;        
    }
    return 0;
}
