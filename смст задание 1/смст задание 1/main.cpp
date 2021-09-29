#include <iostream>
#include <math.h>
using namespace std;
int main()
{//task 1
    setlocale(LC_ALL, "rus");
    int chislo;
    cout << "Введите число";
    cin >> chislo;
    int razryad = 0;
    int ten = 1;
    while (true)
    {
        ten *= 10;
        if (ten>chislo)
        {
            ten /= 10;
            while (ten>=1)
            {
                razryad = chislo/ten;
                cout << razryad << endl;
                chislo%=ten;
                ten/=10;
            }
        }
    }return 0;
    
}


