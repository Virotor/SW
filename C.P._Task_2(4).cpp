
#include <iostream>//содержит задание 4
using namespace std;
void Matr(int** matr, int n, int m) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matr[i][j] = rand()%20 - 10;
        }
    }
}
void printMatr(int** matr, int n, int m) {
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cout << matr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
void transportationMain(int** matr, int n, int m)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < i; j++) {
            int tranM = matr[i][j];
            matr[i][j] = matr[j][i];
            matr[j][i] = tranM;
        }
}
void transportationSide(int** matr, int n, int m)
{
    for (int i = 0; i < (n - 1); i++) {
 for (int j = 0; j < (n - 1) - i; j++)
        {
            int tranM = matr[i][j];
            matr[i][j] = matr[(n - 1) - j][(n - 1) - i];
            matr[(n - 1) - j][(n - 1) - i] = tranM;
        }
    }
       
}

int main()
{
    int ** matr, n, m;
    cout << "Input n(strings) ";
    cin >> n;
    cout << "Input m(collumns) ";
    cin >> m;
                 matr = new int*[n];
    for (int i = 0; i < n; i++)
        matr[i] = new int[n];
    Matr(matr, n, m);
    printMatr(matr, n, m);
    transportationMain( matr, n, m);
    cout << "Main-transportated matrix" << endl;
    printMatr(matr, n, m);
    transportationSide(matr, n, m);
    cout << "side-transportated matrix" << endl;
    printMatr(matr, n, m);
    for (int i = 0; i < n; i++)
    {
        delete[] matr[i];
    }

    delete[] matr;
    

}

