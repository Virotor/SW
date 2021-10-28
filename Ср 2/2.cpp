#include <iostream>
#include<conio.h>
#include<string>
using namespace std;

int* arr;
int SIZE = 0;

void create_array() {
    cout << "Enter array size: ";
    cin >> SIZE;
    arr = new int[SIZE];
}

void random(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 10-rand()%20;
        cout <<to_string(arr[i]) + " ";
    }

    cout << endl;
}

int main()
{
    int cnt = 0;
    int dif = 0;
    create_array();
    random(arr, SIZE);
    for (int i = 2; i < SIZE; i++) {
        if (arr[i] < arr[i - 2] - arr[i - 1]) {
            if (cnt > 0) cout << ",";
            cout <<to_string(arr[i]);
            cnt++;
        }
    }
    cout << endl;
    _getch();
}