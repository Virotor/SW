#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int n, k, i = 0;
    stringstream dd;
    cout << "Введите n\n";
    cin >> n;
    cout << "Введите k\n";
    cin >> k;
    dd << n;
    while (i != k)
    {
        cout << dd.str()[i];
        i++;
    }
    cout << endl;
    return 0;
}

