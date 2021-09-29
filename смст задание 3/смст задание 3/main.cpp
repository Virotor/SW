#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, k, cifrachislaN;
    cout << "Введите n: ";
    cin >> n;
    cout << "Введите k: ";
    cin >> k;
    int ten=1;
    while (true)
    {
        ten*=10;
        if (ten>n)
        {
            ten/=10;
            cifrachislaN=n/ten;
            break;
        }
    }
    int result=0;
    int cifrachislaN1=0;
    for (int i=0; i<k; i++)
    {
        cifrachislaN1+=pow(10,i);
        result=cifrachislaN*cifrachislaN1;
    }
    cout << "result= " << result << endl;
}
