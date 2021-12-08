#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
struct Task {
    int number1;
    int number2;
    char line1[100];
    char line2[100];
};
bool Model(const char* filename) {
    setlocale(LC_ALL, "RUS");
    Task B[2] = {
      { 215, 321, "benz", "mers" },
      { 487, 304, "bear", "lamba" },
    };
    int n = 2;
    Task C[2];
    int n2;
    int i;
    ofstream outF(filename, ios::out);
    if (!outF) return false;
    outF.write((char*)&n, sizeof(int));
    for (i = 0; i < n; i++)
        outF.write((char*)&(B[i]), sizeof(Task));
    cout << "\t Массив " << endl;
    outF.close();
    ifstream inF(filename, ios::in | ios::binary);
    if (!inF) return false;
    cout << "\t Чтение массива...";
    inF.read((char*)&n2, sizeof(int));
    for (i = 0; i < n2; i++)
        inF.read((char*)&(C[i]), sizeof(Task));
    inF.close();
    int size = 2;
    Task F[2];
    cout << "Массив  C:" << endl;
    for (i = 0; i < n2; i++) {
        F[i] = C[i];
        cout << "number1 = " << C[i].number1 << ", ";
        cout << "number2 = " << C[i].number2 << ", ";
        cout << "line1 = " << C[i].line1 << ", ";
        cout << "line2 = " << C[i].line2 << endl;
    }
    ofstream outFF("maint2.txt", ios::out);
    if (!outFF) return false;
    outFF.write((char*)&n, sizeof(int));
    for (int i = size - 1; i >= 0; --i) {
        outFF.write((char*)&(F[i]), sizeof(Task));
        cout << " \t Массив" << endl;
    }
    outFF.close();
}
int main() {
    Model("maint.txt");
    return 0;
}