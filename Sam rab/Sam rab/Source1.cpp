#include <iostream>
using namespace std;

int two ()
{
    int n;
    cin >> n;
    while (n)
    {

        cout << n % 10 << endl;
        n /= 10;



    }
    system("pause");
    return 0;
}
