#include <iostream>
using namespace std;
int main()
{
    int a, b, NUM, c;
    cin >> NUM;
    if (NUM == 0)
    {
        cout << 0 << endl;
        exit;
    }
    c = 0;
    if (NUM < 0)
    {
        NUM = NUM * (-1);
        c++;
    }
    b = 0; 
    a = NUM;
    while (a > 0) 
    {
        b++;
        a = a / 10;
    }
    while (b > 0) 
    {
        cout << trunc(NUM / pow(10, b - 1)) << endl;
        NUM = NUM - trunc(NUM / pow(10, b - 1)) * pow(10, b - 1);
        b--;
    }
    if (c == 1)
    {
        cout << "-" << endl;
    }
    return 0;
}