
#include <iostream>
using namespace std;

int main()
{

    int a, b, h, a1, b1, min1, min2;

    cout << "Enter a, b, h \n";
    cin >> a >> b >> h;
    cout << "enter a, b for a hole \n";
    cin >> a1 >> b1;

    if (a > b && a > h)
    {
        min1 = b;
        min2 = h;
    }
    else if (b > a && b > h)
    {
        min1 = a;
        min2 = h;
    }
    else if (h > a && h > b)
    {
        min1 = a;
        min2 = b;
    }

    if (min1 <= a1 && min2 <= b1)
    {
        cout << "Suits";
    }
    else if (min1 <= b1 && min2 <= a1)
    {
        cout << "Suits";
    }
    else
    {
        cout << "doesnt suit";
    }

}
