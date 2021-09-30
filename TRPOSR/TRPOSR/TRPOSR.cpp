#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter a N: ";
    cin >> n;
    cout << "Enter a K: ";
    cin >> k;


    k = to_string(n).length() - k;
    n /= pow(10, k);
    cout << n;
}