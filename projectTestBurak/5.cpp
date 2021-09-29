#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int randNum1, randNum2, randNum3, randNum4, huckNum1, huckNum2, huckNum3, huckNum4;
    char min, max;
    randNum1 = 0;
    randNum2 = 0;
    randNum3 = 0;
    randNum4 = 0;
    huckNum1 = 0;
    huckNum2 = 0;
    huckNum3 = 0;
    huckNum4 = 0;
    min = 0;
    max = 9;
    srand(time(0));
    randNum1 = rand() % (max - min + 1) + min;
    randNum2 = rand() % (max - min + 1) + min;
    randNum3 = rand() % (max - min + 1) + min;
    randNum4 = rand() % (max - min + 1) + min;
    cout << randNum1 << " " << randNum2 << " " << randNum3 << " " << randNum4 << endl;
    cout << "Взлом: " << endl;
    for (int i = 0; i < 10000; i++)
    {
        huckNum1++;
        if (huckNum1 == randNum1 && huckNum2 == randNum2 && huckNum3 == randNum3 && huckNum4 == randNum4)
        {
            cout << huckNum1 << " " << huckNum2 << " " << huckNum3 << " " << huckNum4 << endl;
        }
        if (huckNum1 == 9)
        {
            if (huckNum1 == 9)
            {
                huckNum1 = 0;
            }
            huckNum2++;
                if (huckNum1 == randNum1 && huckNum2 == randNum2 && huckNum3 == randNum3 && huckNum4 == randNum4)
                {
                    cout << huckNum1 << " " << huckNum2 << " " << huckNum3 << " " << huckNum4 << endl;
                }
                if (huckNum2 == 9)
                {
                    if (huckNum2 == 9)
                    {
                        huckNum2 = 0;
                    }
                    huckNum3++;
                    if (huckNum1 == randNum1 && huckNum2 == randNum2 && huckNum3 == randNum3 && huckNum4 == randNum4)
                    {
                        cout << huckNum1 << " " << huckNum2 << " " << huckNum3 << " " << huckNum4 << endl;
                    }
                    if (huckNum3 == 9)
                    {
                        if (huckNum3 == 9)
                        {
                            huckNum3 = 0;
                        }
                        huckNum4++;
                        if (huckNum1 == randNum1 && huckNum2 == randNum2 && huckNum3 == randNum3 && huckNum4 == randNum4)
                        {
                            cout << huckNum1 << " " << huckNum2 << " " << huckNum3 << " " << huckNum4 << endl;
                        }
                    }
                }
        }
    }
    return 0;
}