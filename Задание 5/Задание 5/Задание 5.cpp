
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL));
    int n1 = rand() % 10, n2 = rand() % 10, n3 = rand() % 10, n4 = rand() % 10;
    for (int a = 0; a < 10; a++) {
        for (int b =0; b < 10; b++) {
            for (int c= 0; c <10; c++) {
                for (int d = 0; d <10; d++) {
                    if (a==n1 and b==n2 and  c == n3 and d==n4) cout<<"Finally the program guessed this GOOOOD password    "<<a<<b<<c<<d;
                }

            }
        }
    }
    return 0;
}

// Надеюсь так норм,пойдет с int?
