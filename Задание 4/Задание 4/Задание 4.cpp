

#include <iostream>
using namespace std;
int main()
{
    double w, h, W, H, l;
    cout << "Input W   "; cin >> W;
    cout << "Input H   "; cin >> H;
    cout << "Input w   "; cin >> w;
    cout << "Input h   "; cin >> h;
    cout << "Input L   "; cin >> l;
    if (w > 0 && W > 0 && h > 0 && H > 0 && l > 0) {
        if (w < W && h < H) cout << "Parallelepiped will pass" << endl;
        else if (h < W && w < H) cout << "Parallelepiped will pass" << endl;
        else if (l < H && h < W) cout << "Parallelepiped will pass" << endl; 
        else if (l < H && w < W) cout << "Parallelepiped will pass" << endl;
        else if (l < H && w < W) cout << "Parallelepiped will pass" << endl;
        else if (w < H && l < W) cout << "Parallelepiped will pass" << endl;
                else cout << "The parallelepiped will not pass" << endl;
       
    }
    else cout << "Enter positive variable values" << endl;
    return 0;

}
    

