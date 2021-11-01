#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"rus");
    int length;
    cout << "Введите длину массива : ";
    cin >> length;

   srand(time(0));
    int* arr = new int[length];
    for (int i = 0; i < length; i++) {
      arr[i] = rand() % 100 - 50;
      cout << "a[" << i << "] = " << arr[i] << endl;
    }

    int numb;
    cout << "Введите число : ";
    cin >> numb;

    for (int i = 0; i < length; i++) {
      if (arr[i] == numb) {
        cout << "Позиция числа " << numb << " - " << i <<endl;
          
       
          
        return 0;
      }
    }
    cout << "...";
}
