

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RUS");
    int x;
    cout << "Напишите число" << endl;
    cin >> x;
    while (x)
    {
        cout << x % 10 << endl;
        x /= 10;
    }
    
}


