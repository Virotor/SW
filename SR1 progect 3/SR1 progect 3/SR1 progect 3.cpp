#include <iostream>
using namespace std;
int main()
{
    int n, k,col=0,n1;
    cin >> n;
    n1 = n;
    while (n1 > 0) { n1 /= 10; col++; }
    cin >> k;
    if (k > col) cout << "Error number "; 
    for (int i=0; i<col-k; i++) {
        n /= 10;
    }
    cout << n;
    return 0;
}
