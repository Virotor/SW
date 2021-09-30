#include <iostream>
#include<locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int x, y = 0;
    cout << "Введите число:"; 
    cin >> x;
    if x < 0) x = y;
    if (x == 0) cout << 0 << endl;
    
    else
    {
        while (x)
        {
           
        y = 10 * y + x % 10;
            x/= 10;
        }

        while (y)
        {
      cout << y % 10 << endl;
            y/= 10;
        }
    }
    return 0;
}