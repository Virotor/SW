#include <iostream>
#include <string>
using namespace std;
int main()
{
    int k,i;
    string n;
    cout << "Enter n = "; cin >> n;
    cout << "Enter k = "; cin >> k;
    if (size(n) >= k)
    {
    for (i=0; i<k; i++) cout << n[i];
    }
    else cout << "Error!!!";
    cout << "\n";
    return 0;
}
