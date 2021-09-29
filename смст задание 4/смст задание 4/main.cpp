#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int lengthParal, widthParal, heightParal, lengthHole, widthHole;

    cout << "Vvedite dlinu, shirinu i vuisotu parallelepipeda : " << endl;
    cin >> lengthParal;
    cin >> widthParal;
    cin >> heightParal;

    cout << "Vvedite dlinu i shirinu otverstiya : " << endl;
    cin >> lengthHole;
    cin >> widthHole;

    if ((lengthParal >= lengthHole) && (widthParal >= widthHole)) {
        cout << "Parallelepiped prohodit v otverstiye";
    }
    else {
        cout << "Parallelepiped ne prohodit v otverstiye";
    }
}
