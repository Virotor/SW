#include<iostream>
#include<ctime>
using namespace std;

void transportationSide(double** matr, int n, int m)
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
    srand(time(0));
    int n, m, b;
    double* pr;
    cout << " strings n=";
    cin >> n;
    cout << "columns m=";
    cin >> m;
    double** Matrix = new double* [n];
    for (int i = 0; i < n; i++)
        Matrix[i] = new double[m];
    cout << "matrix\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            Matrix[i][j] = rand() % 9 + 1;
         
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            int temp = Matrix[i][j];
            Matrix[i][j] = Matrix[j][i];
            Matrix[j][i] = temp;
        }
    }
  
    cout << "New matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << Matrix[i][j] << " ";
        cout << endl;
    }
    transportationSide(Matrix, n, m);
    cout << "New matrix x2:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << Matrix[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < n; i++)
        delete[] Matrix[i];
    delete[] Matrix;
    return 0;
}
