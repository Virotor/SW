#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int min, max, a, b, c, d, A, B, C, D;
    a = 0; b = 0; c = 0; d = 0; A = 0; B = 0; C = 0; D = 0;
    min = 0;
    max = 9;
    srand(time(0));
    a = rand() % (max - min + 1) + min;
    b = rand() % (max - min + 1) + min;
    c = rand() % (max - min + 1) + min;
    d = rand() % (max - min + 1) + min;
    cout << a << " " << b << " " << c << " " << d << endl;
    cout << "Hacked password: " << endl;
    for (int i = 0; i < 10000; i++)
    {
        A++;
        if (A == a && B == b && C == c && D == d) {
            cout << A << B << C << D;
        }
        if (A == 10)
        {
            if (A == 10)
            {
                A = 0;
            }
            B++;
            if (A == a && B == b && C == c && D == d) {
                cout << A << B << C << D;
            }
            if (B == 10)
            {
                if (B == 10)
                {
                    B = 0;
                }
                C++;
                if (A == a && B == b && C == c && D == d) {
                    cout << A << B << C << D;
                }
                if (C == 10)
                {
                    if (C == 10)
                    {
                        C = 0;
                    }
                    D++;
                    if (A == a && B == b && C == c && D == d) {
                        cout << A << B << C << D;
                    }

                }
            }
        }
    }


    return 0;
}