#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c, x, y; 
    cout<<"Введите размеры прямоугольного отверстия(длина и ширина)\n";
    cin>>x>>y;
    cout<<"Введите размеры параллелепипеда(a,b,c)\n";
    cin>>a>>b>>c;
    if (a<x && b<y || b<x && a<y || b<x && c<y || c<x && b<y || a<x && c<y || c<x && a<y) cout<<"Параллелепипед проходит через отверстие\n";
    else cout<<"Параллелепипед не проходит через отверстие\n";
    return 0;
}