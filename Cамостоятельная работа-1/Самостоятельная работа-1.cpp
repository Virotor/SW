#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter number n = "; cin >> n;
    if (n > 0)
    {
      while (n)
      {
          cout << n % 10 << endl;
          n = n / 10;
      }
    }
    else cout << "Error\n";
    return 0;
}
