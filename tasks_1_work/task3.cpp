#include <string>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,k;
    cout << "Enter first number:";
    cin >> n;
    cout << "Enter second number:";
    cin >> k;
    k = to_string(n).length() - k;
    n /= pow(10,k);
    cout << n << "\n";
    
    return 0;
}
