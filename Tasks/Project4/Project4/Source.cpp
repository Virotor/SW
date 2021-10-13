#include <iostream>
using namespace std;
int main()
{
int h, w, y, x, z;
cout << "Enter hole's height and width " << endl;
cout << "h = "; cin >> h;
cout << "w = "; cin >> w;
cout << " Enter parallelepiped's height, width and length: " << endl;
cout << "h = "; cin >> y;
cout << "w = "; cin >> x;
cout << "l = "; cin >> z;
if (x < w && y < h && z < w && z < h) {
	cout << "Successfully" << endl;
}
else
cout << "Unsuccessfully" << endl;
system("pause");
	}