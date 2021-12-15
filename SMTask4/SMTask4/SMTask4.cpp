#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter width, lenght, height" << endl;
    cin >> x >> y >> z;
    int xo, yo;//размеры отверстия
    cout << "Enter size of hole" << endl;
    cin >> xo >> yo;
    int min1, min2;
    min1 = (x <= y ? x <= z ? x : y <= z ? y : z : y <= z ? y : z);
    if (min1 == x)
    {
        min2 = (y < z ? min2 = y : min2 = z);
    }
    else
    {
        if (min1 == y)
        {
            min2 = (x < z ? min2 = x : min2 = z);
        }
        else
        {
            min2 = (x < y ? min2 = x : min2 = y);
        }
    }
    if (xo > min1)
    {
        if (yo > min2)
        {
            cout << "Paralelepiped prohodit v pryamougolnoe otverstie" << endl;
        }
        else
        {
            cout << "Paralelepiped ne prohodit v pryamougolnoe otverstie" << endl;
        }
    }
    else
    {
        if (xo > min2)
        {
            if (yo > min1)
            {
                cout << "Paralelepiped prohodit v pryamougolnoe otverstie" << endl;
            }
            else
            {
                cout << "Paralelepiped ne prohodit v pryamougolnoe otverstie" << endl;
            }
        }
        else
        {
            cout << "Paralelepiped ne prohodit v pryamougolnoe otverstie" << endl;
        }
    }
}