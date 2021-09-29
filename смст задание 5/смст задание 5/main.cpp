#include <iostream>

using namespace std;

int main()
{
    const int min = 0, max = 9, size = 4;
    srand(time(0));

    int num;
    int ary1[size];
    for (int i = 0; i < size; i++) {
        ary1[i] = num = min + rand() % (max - min + 1);
    }

    int ary2[size];
    for (int i = 0; i < size; i++) {
        ary2[i] = 0;
    }

    while (ary1[0] != ary2[0]) {
        ary2[0]++;
    }
    while (ary1[1] != ary2[1]) {
        ary2[1]++;
    }
    while (ary1[2] != ary2[2]) {
        ary2[2]++;
    }
    while (ary1[3] != ary2[3]) {
        ary2[3]++;
    }

    for (int i = 0; i < size; i++) {
        cout << ary2[i] << endl;
    }
 


}
