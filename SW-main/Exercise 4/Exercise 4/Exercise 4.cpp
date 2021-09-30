

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, b, c, x, y, z;
    cout << "Exrcise 4\n" << endl;
    cout << "Введите длину,ширину,выосту параллелепипеда: \n";
    cin >> x >> y >> z;
    cout << "Введите длину,ширину,выосту отверстия: \n";
    cin >> a >> b >> c;
    if ((a >= z & b >= y) || (a >= z & b >= x) || (a >= x & b >= y) || (b >= z & a >= x) || (b >= x & a >= y))
    {
        cout << "Можно" << endl;
    }
    else
    {
        cout << "Нельзя" << endl;
    }
}

