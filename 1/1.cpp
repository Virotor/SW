#include <string>
#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "rus");
    string a;
    cout << "Введите число: ";
    cin >> a;
    for (int i = 0; i < size(a); i++)
        cout << a[i] << endl;
    return 0;
}


