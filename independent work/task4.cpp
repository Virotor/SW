#include <iostream>

using namespace std;


int main(){
    int length_parall, width_parall, hight_parall, length_hole, width_hole, hole_area, area1, area2, area3;

    cout << "Enter length of parallelepiped: "; cin >> length_parall;
    cout << "Enter width of parallelepiped: ";   cin >> width_parall;
    cout << "Enter hight of parallelepiped: ";  cin >> hight_parall;
    cout << "Enter length of hole: "; cin >> length_hole;
    cout << "Enter width of hole: ";  cin >> width_hole;

    area1 = length_parall*width_parall;
    area2 = length_parall*hight_parall;
    area3 = width_parall*hight_parall;
    hole_area = length_hole*width_hole;


    if (area1 <= hole_area)      cout << "The parallelepiped will fit" << endl;
    else if (area2 <= hole_area) cout << "The parallelepiped will fit" << endl;
    else if (area3 <= hole_area) cout << "The parallelepiped will fit" << endl;
    else                         cout << "The parallelepiped will not fit" << endl;
}