#include <iostream>
#include <iomanip>

using namespace std;
void position(double mass[], int size, int x, int k = 0)
{
    for (int i = 0; i < size; i++)
        if (mass[i] == x)
        {
            cout << i << " ";
            k++;
        }
    if (k == 0)
    {
        cout << 0 << endl;

    }

}

int main()
{
    system("color F0");
    int size, k = 0;
    int A = -9;
    int B = 9;
    cout << "Enter the size of the array: "; cin >> size;
    cout << "Array: ";
    double* mass = new double[size], x;
    srand(time(0));

    for (int i = 0; i < size; i++)
    {
        mass[i] = A + rand() % ((B + 1) - A);
        cout << setw(2) << mass[i] << " ";
    }
    cout << "\nEnter the element: "; cin >> x;
    cout << "Position: ";
    position(mass, size, x, k);
    delete[]mass;
    system("pause");
    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;
void numbers(double mass[], int size)
{
    for (int i = 0; i < size; i++)
        if (mass[i] < mass[i - 1] - mass[i - 2])
        {
            cout << mass[i] << " ";

        }

}

int main()
{
    system("color F0");
    int size;
    int A = -9;
    int B = 9;
    cout << "Enter the size of the array: "; cin >> size;
    cout << "Array: ";
    double* mass = new double[size];
    srand(time(0));

    for (int i = 0; i < size; i++)
    {
        mass[i] = A + rand() % ((B + 1) - A);
        cout << setw(2) << mass[i] << " ";
    }
    cout << "Numbers ";
    numbers(mass, size);
    delete[]mass;
    system("pause");
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;
void findlength(int length[], int size, int k = 1, int max = 0)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (length[i] == length[i + 1])
        {
            k++;
        }
        else
        {
            k = 1;
        }
        if (k > max)
            max = k;
    }
    cout << max << endl;
}

int main()
{
    system("color F0");
    int size, i, k = 1, max = 0;
    int A = -9;
    int B = 9;
    cout << "Enter size: "; cin >> size;
    int* length = new int[size];
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        length[i] = A + rand() % ((B + 1) - A);
        cout << setw(2) << length[i] << " ";

    }
    cout << "\nThe maximum length of repeated numbers: ";
    findlength(length, size, k, max);
    delete[] length;
    return 0;
}
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
    system("color F0");
    srand(time(NULL));
    int size = 0, i, j;
    int A = -9;
    int B = 9;
    cout << "ENTER SIZE PLEASE ^-^: "; cin >> size;
    cout << "----------------------------------------------------";
    cout << "\nMatrix: " << endl;
    cout << "----------------------------------------------------\n";
    int** mass = new int* [size];
    for (int i = 0; i < size; i++)
    {
        mass[i] = new int[size];
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            mass[i][j] = A + rand() % ((B + 1) - A);
            cout << setw(2) << mass[i][j] << " ";
        }
        cout << endl;
    }
    cout << "----------------------------------------------------";
    cout << "\nThe transposed matrix along the MAIN diagonal:" << endl;
    cout << "----------------------------------------------------\n";
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            cout << setw(2) << mass[j][i] << " ";
        cout << endl;
    }
    cout << "----------------------------------------------------";
    cout << "\nThe transposed matrix along the SIDE diagonal:" << endl;
    cout << "----------------------------------------------------\n";
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            cout << setw(2) << mass[size - 1 - j][size - 1 - i] << " ";
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < size; i++)
    {
        delete[]mass[i];
    }
    delete[] mass;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[])
{

    int size = 0, c1 = 0, c2 = 1;
    double** mass = 0;
    cout << "Enter the number of points: "; cin >> size;

    if (size < 2)
        return 1;

    mass = new double* [size];

    for (int i = 0; i < size; i++)
        mass[i] = new double[2];

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the x coordinate of " << i + 1 << " point: ";
        cin >> mass[i][0];
        cout << "Enter the y coordinate of " << i + 1 << " point: ";
        cin >> mass[i][1];
    }

    cout << endl;

    double d = abs(sqrt(pow((mass[0][0] - mass[1][0]), 2) + pow((mass[0][1] - mass[1][1]), 2)));

    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
        {
            double temp = abs(sqrt(pow(mass[i][0] - mass[j][0], 2) + pow(mass[i][1] - mass[j][1], 2)));

            if (temp > d)
            {
                d = temp;
                c1 = i + 1;
                c2 = j + 1;
            }
            delete[] mass[i];
        }
    delete[] mass;
    cout << "Maximum distance between points " << d << endl;
    cout << endl;
    return 0;
}