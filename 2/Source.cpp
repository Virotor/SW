#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
    int* arr;
    int size;
    cout << "Enter a massive size: " << endl;
    cin >> size;
    arr = new int[size];
    srand(time(0));
    for (int a = 0; a < size; ++a)
    {
        arr[a] = rand() % 21 - 10;
        cout << setw(6) << arr[a];
    }
    cout << endl;
    int cyclecounter = 0;
    for (int counter = 0; counter < size - 2; counter++)
    {

        if (arr[counter] - arr[counter + 1] > arr[counter + 2])
        {
            cout << arr[counter + 2] << endl;
            cyclecounter = cyclecounter++;
        }
    }
    if (cyclecounter == 0)
        cout << "this number no :( " << endl;
    delete[] arr;
    system("pause");
    return(0);
}
