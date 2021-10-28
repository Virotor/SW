//
//  main.cpp
//  trpo1
//
//  Created by Arina Melkumova on 27.10.21.
//

#include <iostream>

using namespace std;

void fillArrayWithRandomElements(int* arr, unsigned int length) {
        srand((unsigned) time(0));
        for (unsigned int i = 0; i < length; i++){
            arr[i] =  50 - rand() % 100;//between -50 and 50
        };
}

void printArray(int* arr, unsigned int length){
    cout << "Your randomly generated array: " << endl;
    for (int i = 0; i < length; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void findNumbers(int* arr, unsigned int length){
    cout << "Found numbers: " << endl;
    for (int i = 2; i < length; i++) {
        int arrayElement = arr[i];
        int differenceOfTwoPrevious = arr[i-2] - arr[i-1];
        
        if (arrayElement < differenceOfTwoPrevious) {
            cout << arrayElement << ' ';
        }
    }
    cout << endl;
}

int main() {
    unsigned int length;
    
    cout << "Enter length of array:\n > "; cin >> length;
    int* randomArray = new int[length];
    
    fillArrayWithRandomElements(randomArray, length);
    
    printArray(randomArray, length);
    
    findNumbers(randomArray, length);
    
    return 0;
}
