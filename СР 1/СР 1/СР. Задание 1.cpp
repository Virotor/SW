#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "a= ";
    cin >> a;
    while (a) {
        a = a / 10; 
        cout << a % 10 << endl;   
    }
    return 0;
}