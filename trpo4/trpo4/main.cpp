//
//  main.cpp
//  trpo1
//
//  Created by Arina Melkumova on 27.10.21.
//

#include <iostream>
#include <algorithm>

using namespace std;

void fillMatrix(int** matrix, unsigned int size) {
        srand((unsigned) time(0));
        for (unsigned int row = 0; row < size; row++){
            for (unsigned int column = 0; column < size; column++){
                    matrix[row][column] = 50 - rand() % 100;
            }
        }
}

void printMatrix(int** matrix, unsigned int size){
    for (unsigned int row = 0; row < size; row++){
        for (unsigned int column = 0; column < size; column++){
                printf("%d ", matrix[row][column]);
            }
        cout << endl;
    }
}

void transposeMatrix(int** matrix, unsigned int size, string diagonalToTranspose){
    int temp = 0;
    if (diagonalToTranspose == "Main") {
        for (int row = 0; row < size; row++) {
            for (int column = row + 1; column < size; column++) {
                temp = matrix[row][column];
                matrix[row][column] = matrix[column][row];
                matrix[column][row] = temp;
            }
        }
    } else if(diagonalToTranspose == "Leading") {
        for (int row = 0; row < size; row++){
            for (int column = 0; column < size - row - 1; column++){
                temp = matrix[row][column];
                matrix[row][column] = matrix[size-column-1][size-row-1];
                matrix[size-column-1][size-row-1] = temp;
            }
        }
    }
}

int main() {
    
    unsigned int size;
    const string mainDiagonale = "Main";
    const string leadingDiagonale = "Leading";
    
    cout << "Enter size of matrix:\n > "; cin >> size;
    int** matrix = new int* [size];
    for (unsigned int i = 0; i < size; i++){
            matrix[i] = new int[size];
        }
    
    cout << "Generated matrix: " << endl;
    fillMatrix(matrix, size);
    printMatrix(matrix, size);
    cout << endl;
    
    cout << "Transpose by Main: " << endl;
    transposeMatrix(matrix, size, mainDiagonale);
    printMatrix(matrix, size);
    cout << endl;
    
    cout << "Transpose by Leading: " << endl;
    transposeMatrix(matrix, size, leadingDiagonale);
    printMatrix(matrix, size);
    cout << endl;
//    fillArrayWithRandomElements(randomArray, size);
//
//    printArray(randomArray, length);
    
    
    return 0;
}
