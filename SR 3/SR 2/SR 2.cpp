#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

struct Task
{
    int number1;
    int number2;
    char line1[100];
    char line2[100];
};

bool Example7(const char* filename)
{
    Task B[2] = {
      { 123, 222, "faff", "cuba" },
      { 544, 333, "blax", "kasta" },
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
    cout << "Array is written\n" << endl;

    outF.close();

    ifstream inF(filename, ios::in | ios::binary);

    if (!inF) return false;

    cout << "Read the array...\n";

    inF.read((char*)&n2, sizeof(int));

    for (i = 0; i < n2; i++)
        inF.read((char*)&(C[i]), sizeof(Task));

    inF.close();

    int size = 2;
    Task F[2];

    cout << "Array C:" << endl;
    for (i = 0; i < n2; i++)
    {
        F[i] = C[i];
        cout << "number1 = " << C[i].number1 << ", ";
        cout << "number2 = " << C[i].number2 << ", ";
        cout << "line1 = " << C[i].line1 << ", ";
        cout << "line2 = " << C[i].line2 << endl;
    }

    ofstream outFF("maint2.txt", ios::out);
    if (!outFF) return false;

    // записать значение n
    outFF.write((char*)&n, sizeof(int));

    // запись массива B[] в файл wf
    for (int i = size - 1; i >= 0; --i) {
        outFF.write((char*)&(F[i]), sizeof(Task));
        cout << "Array is written\n" << endl;
    }

    // после завершения работы с файлом его нужно закрыть (обязательно)
    outFF.close();
}

int main()
{
    Example7("maint.txt");
    return 0;
}