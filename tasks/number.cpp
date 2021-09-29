#include <iostream>
using namespace std;

int main()
{
    string number;
    cout << "Enter a number:";
    cin >> number;
    for (int i=0; i < number.length(); i++ )
    {
        cout << number[i] << "\n";
    }
    
    return 0;
}
