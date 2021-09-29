#include<iostream>
#include<string>
using namespace std;
int main()
{
    string n;
    cout << "n=  "; cin >> n;
    int k;
    cout << "k=  "; cin >> k;
    if (k <= size(n))
    {
        for (int i = 0; i < k; i++) {
            cout << n[i];
        }
    }
    else cout << "NOPE";
    return 0;
}