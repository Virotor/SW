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
        arr[i] = rand() % 3;//between -50 and 50
    };
}

void printArray(int* arr, unsigned int length){
    cout << "Your randomly generated array: " << endl;
    for (int i = 0; i < length; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int findLongestSequence(int* arr, unsigned int length){
    int longestSequence = 0,
        currentSequence = 1;
    for (int i = 0; i < length; i++) {
        if (arr[i] == arr[i+1]) {
            currentSequence++;
        } else {
            if (longestSequence < currentSequence) {
                longestSequence = currentSequence;
            }
            currentSequence = 1;
        }
    }
    return longestSequence;
}

int main() {
    unsigned int length, sequence;
    
    cout << "Enter length of array:\n > "; cin >> length;
    int* randomArray = new int[length];
    
    fillArrayWithRandomElements(randomArray, length);
    
    printArray(randomArray, length);
    
    sequence = findLongestSequence(randomArray, length);
    cout << "Longest sequence: " << sequence << endl;
    return 0;
}
