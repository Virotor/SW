#include <iostream>
using namespace std;

int main()
{
    int number,x,y,z;
    cout << "Enter a number:";
    cin >> number;
    
    x = number / 100;
    number %= 100;
    y = number / 10;
    number %= 10;
    z = number;
    
    cout << x << "\n";
    cout << y << "\n";
    cout << z << "\n";
    
    return 0;
}
