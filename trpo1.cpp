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

int findIndexOfElement(int element, int* arr, unsigned int length){
    int foundIndex;
    for (int i = 0; i < length; i++) {
        if (element == arr[i]) {
            foundIndex = i;
            break;
        }
    }
    return foundIndex;
}

int main() {
    unsigned int length, index;
    int element;
    
    cout << "Enter length of array:\n > "; cin >> length;
    int* randomArray = new int[length];
    
    fillArrayWithRandomElements(randomArray, length);
    
    printArray(randomArray, length);
    
    cout << "Enter an element: ";
    cin >> element;
    
    index = findIndexOfElement(element, randomArray, length);
    cout << "Index of element: " << index << endl;
    
    return 0;
}
