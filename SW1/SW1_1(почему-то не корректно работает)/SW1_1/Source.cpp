#include <iostream>

using namespace std;
int main()
{
    int number;
    cin >> number;
    while (number)
    {
        cout << number % 10 << endl;
        number /= 10;
    }
    return 0;
}