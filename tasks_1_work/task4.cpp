#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int diagonal1,diagonal2,diagonal3,width,length,height,Diametr;
    cout << "Enter width:";
    cin >> width;
    cout << "Enter length:";
    cin >> length;
    cout << "Enter Height:";
    cin >> height;
    cout << "Enter Diametr of a circle:";
    cin >> Diametr;
    
    diagonal1 = pow((width*width)+(length*length), 1./2.);
    diagonal2 = pow((width*width)+(height*height), 1./2.);
    diagonal3 = pow((length*length)+(height*height), 1./2.);

    if (diagonal1 <= Diametr) {
        cout << "First side OK" << endl;
    } else {
        cout << "First side NO" << endl;
    }
    if (diagonal2 <= Diametr) {
        cout << "Second side OK" << endl;
    } else {
        cout << "Second side NO" << endl;
    }
    if (diagonal3 <= Diametr) {
        cout << "Third side OK" << endl;
    } else {
        cout << "Third side NO" << endl;

    }
    return 0;
}
