#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int r11, r12, r13, r14, r21=0, r22=0, r23=0, r24=0;
    srand(time(NULL));
    r11 = rand() % 10;
    r12 = rand() % 10;
    r13 = rand() % 10;
    r14 = rand() % 10;
    while (r11 != r21) r21 = rand() % 10; 
    while (r12 != r22) r22 = rand() % 10;
    while (r13 != r23) r23 = rand() % 10;
    while (r14 != r24) r24 = rand() % 10;
    cout <<"Password is " << r21 << r22 << r23 << r24;
}