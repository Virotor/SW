
#include <iostream>
using namespace std;

int main() {
  setlocale(LC_ALL, "Russian");

  int length;
  cout << "Введите длину массива : ";
  cin >> length;

  srand(time(0));
  int* arr = new int[length];
  for (int i = 0; i < length; i++) {
    arr[i] = rand() % 100 - 50;
    cout << "a[" << i << "] = " << arr[i] << endl;
  }

  cout << endl;

  int numb;
  for (int i = 2; i < length; i++) {
    if ((arr[i - 2] - arr[i - 1]) >= arr[i]) {
      numb = arr[i];
      cout << numb << endl;
    }
  }
}
