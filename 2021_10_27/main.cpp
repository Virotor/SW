#include <iostream>
#include <conio.h>
using std::cin;
using std::cout;
using std::max;
using std::string;
using std::getline;

int findElementFirstIndex(const double* array, int& size, double value);
int findIndexOfSubstr(string parent, string child);
double* getArray(int& array_size);
void elementsArrayFind();
void elementsStringFind();

int main() {
  elementsArrayFind();
  elementsStringFind();
  return 0;
}

void elementsArrayFind() {
  cout << "Task 1: Find elements first index\n\n";
  int size;
  double* values = getArray(size);
  double find_value;
  cout << "Enter value to find = ";
  cin >> find_value;
  int index_of_element = findElementFirstIndex(values, size, find_value);
  if(index_of_element == -1) {
    cout << "Element not found\n";
  } else {
    cout << "Element index = " << index_of_element << '\n';
  }
  cout << "Task 1 is completed\n";
  delete[] values;
}

void elementsStringFind() {
  string parent_string;
  string find_string;
  cout << "Task 1 additional: Find substring\n";
  cout << "Enter main string = ";
  getline(cin, parent_string);
  cout << "Enter substring = ";
  getline(cin, find_string);
  int substring_index;
  substring_index = findIndexOfSubstr(parent_string, find_string);
  if(substring_index == -1) {
    cout << "Substring not found\n";
  } else {
    cout << "Substring starts at index = " << substring_index << '\n';
  }
  cout << "Task 1 additional is completed\n\n";
}

int findElementFirstIndex(const double* array, int& size, double value) {
  for (int i = 0; i < size; i++) {
    if (array[i] == value) {
      return i;
    }
  }
  return -1;
}

int findIndexOfSubstr(string parent, const string child) {
  //Using KMP algorithm to find substr
  parent = child + parent;
  const int size_of_all = int(parent.size());
  const int child_size = int(child.size());
  int* values = new int[size_of_all];
  int reverse_iter = 0;
  for (int iter = 1; iter < size_of_all; iter++) {
    while (reverse_iter > 0 && parent[reverse_iter] != parent[iter]) {
      reverse_iter = values[reverse_iter - 1];
    }
    if (parent[reverse_iter] == parent[iter]) {
      reverse_iter++;
    }
    values[iter] = reverse_iter;
  }

  int substr_ind = -1;
  for (int iter = child_size; iter < size_of_all; iter++) {
    if (values[iter] == child_size) {
      substr_ind = iter - child_size + 1;
      break;
    }
  }
  delete[] values;
  return substr_ind;
}

double* getArray(int& array_size) {
  cout << "Enter array size\n";
  cout << "size = ";
  cin >> array_size;
  while (array_size < 1) {
    cout << "Input error. Size must be > 0\n";
    cout << "size = ";
    cin >> array_size;
  }
  auto array = new double[array_size];
  cout << "Generate random elements? [Y/N]: ";
  unsigned char user_answer = getche();
  cout << "\n";
  if (user_answer == 'Y' || user_answer == 'y') {
    double interval_start;
    double interval_finish;
    cout << "Enter the number generation interval\n";
    cout << "Min value = ";
    cin >> interval_start;
    cout << "Max value = ";
    cin >> interval_finish;

    int mod = int(std::abs(interval_start - interval_finish) + 1);
    mod = max(2, mod);
    cout << "Interval: " << interval_start << ".."
         << int(interval_start) + mod - 1 << '\n';

    for (int ind = 0; ind < array_size; ind++) {
      array[ind] = rand() % mod + interval_start;
    }
    cout << "Array:\n";
    for (int ind = 0; ind < array_size; ind++) {
      cout << array[ind] << ' ';
    }
    cout << '\n';
  } else {
    cout << "Enter " << array_size << " elements\n";
    for (int ind = 0; ind < array_size; ind++) {
      cin >> array[ind];
    }
  }
  return array;
}
