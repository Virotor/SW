
#include <iostream>
#include <string>
using namespace std;


int main()
{

    int b;
    string a;
    cout << "Enter n and k\n";
    cin >> a >> b;
    if (b > size(a))
    {
        cout << "Error";
        return 1;
    }
    a = a.erase(b, size(a));
    cout << "your new number : " << a;

    return 0;
}