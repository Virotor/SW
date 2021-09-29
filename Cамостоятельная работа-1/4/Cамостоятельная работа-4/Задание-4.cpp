#include <iostream>
using namespace std;
int main()
{
    double l,h1,s1,h2,s2;
    cout << "Enter l = "; cin >> l;   /*  l - это длина параллелепипеда  */
    cout << "Enter s1 = "; cin >> s1;   /*  s1 - это ширина параллелепипеда  */
    cout << "Enter h1 = "; cin >> h1;   /*  h1 - это высота параллелепипеда  */
    cout << "Enter s2 = "; cin >> s2;   /*  s2 - это ширина отверстия  */
    cout << "Enter h2 = "; cin >> h2;   /*  h2 - это высота отверстия  */
    if (l > 0 && s1 > 0 && h1 > 0 && s2 > 0 && h2 > 0)
    {
        if (s1<=s2 && h1<=h2) cout << "Nice)))";
        else if (s1<=s2 && l<=h2) cout << "Nice)))";
        else if (h1<=s2 && l<=h2) cout << "Nice)))";
        else if (h1<=s2 && s1<=h2) cout << "Nice)))";
        else cout << "Try again(((";
    }
    else cout << "Error!!!\n";
    return 0;
}
