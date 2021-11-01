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

  int numb = 1, numb1 = 0;
  for (int i = 0; i < length; i++) {
    if (arr[i] == arr[i + 1]) {
      numb++;
      if (numb > numb1) {
        numb1 = numb;
      }
    }
    else {
      numb = 1;
    }
  }

  cout << numb1<<endl;
}
