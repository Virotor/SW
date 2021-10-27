/**
      ---------------------------------------------------
      |         Made by Shamal Viktor (@j3uktop)        |
      |           2019-2021 - Lyceum BSU - IM           |
      |             2021 - BSUIR - FCP - PMS            |
      |          *** All rights reserved ***            |
      ---------------------------------------------------
                                            			**/
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <ctime>
using std::cin;
using std::cout;
using std::max;
using std::string;
using std::getline;
using std::setw;

class matrix {
  double** values;
  int row;
  int col;
  const int SPACE = 5;
 public:
  matrix() {
    row = 0;
    col = 0;
    values = nullptr;
  };
  void init() {
    cout << "Enter matrix size:\n";
    cout << "row count = ";
    cin >> row;
    cout << "col count = ";
    cin >> col;
    while (row < 1 || col < 1) {
      cout << "Input error. Row and col count must be >= 1\n";
      cout << "row count = ";
      cin >> row;
      cout << "col count = ";
      cin >> col;
    }
    int mod;
    double interval_start;
    double interval_finish;
    cout << "Enter the number generation interval\n";
    cout << "Min value = ";
    cin >> interval_start;
    cout << "Max value = ";
    cin >> interval_finish;

    while (interval_start >= interval_finish) {
      cout << "Interval input error\n";
      cout << "Min value = ";
      cin >> interval_start;
      cout << "Max value = ";
      cin >> interval_finish;
    }
    mod = (interval_finish - interval_start + 1);

    values = new double* [row];
    for (int i = 0; i < row; i++) {
      values[i] = new double[col];
    }

    for (int r = 0; r < row; r++) {
      for (int c = 0; c < col; c++) {
        values[r][c] = rand() % mod + interval_start;
      }
    }
  };
  void init(int _row, int _col) {
    if (_row < 1) {
      _row = 0;
    }
    if (_col < 1) {
      _col = 0;
    }
    row = _row;
    col = _col;
    values = new double* [row];
    for (int i = 0; i < row; i++) {
      values[i] = new double[col];
    }
  };
  void print() {
    if (row < 1 || col < 1) {
      cout << "Error. Invalid matrix to print\n";
      return;
    }
    for (int r = 0; r < row; r++) {
      for (int c = 0; c < col; c++) {
        cout << setw(SPACE) << values[r][c] << ' ';
      }
      cout << '\n';
    }
  };
  void transpose() {
    if (row < 1 || col < 1) {
      return;
    }
    matrix result;
    result.init(col, row);
    for (int row_index = 0; row_index < row; row_index++) {
      for (int col_index = 0; col_index < col; col_index++) {
        result.values[col_index][row_index] = values[row_index][col_index];
      }
    }
    *this = result;
  };
  void transposeReverse() {
    if (row < 1 || col < 1) {
      return;
    }
    /*
     00 01 02 03
     10 11 12 13
     20 21 22 23

     23 13 03
     22 12 02
     21 11 01
     20 10 00
     */
    matrix result;
    result.init(col, row);
    for (int row_index = 0; row_index < row; row_index++) {
      for (int col_index = 0; col_index < col; col_index++) {
        result.values[col_index][row_index] =
            values[row - row_index - 1][col - col_index - 1];
      }
    }
    *this = result;
  };
  void operator=(matrix& matr) {
    if (matr.row < 1 || matr.col < 1 || this == &matr) {
      return;
    }
    if (row != 0) {
      for (int row_index = 0; row_index < row; row_index++) {
        delete[] values[row_index];
      }
      delete[] values;
    }
    row = matr.row;
    col = matr.col;
    values = matr.values;
    matr.values = nullptr;
  }
  ~matrix() {
    if (values == nullptr) {
      return;
    }
    for (int i = 0; i < row; i++) {
      delete[] values[i];
    }
    delete[] values;
  };
};

int findElementFirstIndex(const double* array, int& size, double value);
int findIndexOfSubstr(string parent, string child);
double* getArray(int& array_size);
void elementsArrayFind();
void elementsStringFind();
void findNumbersSmallerThanDifferencesOfPreviousTwo();
int largestSubsequence(const double* values,
                       int values_size,
                       double& largest_index);
void findLargestSubsequence();
void matrixTranspose();

int main() {
  srand(time(NULL));
  // elementsArrayFind();
  // elementsStringFind();
  // findNumbersSmallerThanDifferencesOfPreviousTwo();
  // findLargestSubsequence();
  matrixTranspose();
  return 0;
}

void matrixTranspose() {
  cout << "Task 4: transpose matrix\n\n";
  matrix matr;
  matr.init();
  cout << "Matrix:\n";
  matr.print();
  matr.transpose();
  cout << "Transpose matrix:\n";
  matr.print();
  matr.transpose();
  matr.transposeReverse();
  cout << "Reverse transpose matrix:\n";
  matr.print();
  cout << "Task 4 is completed\n\n";
}

void elementsArrayFind() {
  cout << "Task 1: Find elements first index\n\n";
  int size;
  double* values = getArray(size);
  double find_value;
  cout << "Enter value to find = ";
  cin >> find_value;
  int index_of_element = findElementFirstIndex(values, size, find_value);
  if (index_of_element == -1) {
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
  if (substring_index == -1) {
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

void findNumbersSmallerThanDifferencesOfPreviousTwo() {
  cout << "Task 2: Find numbers smaller than" <<
       "the differences of the previous two\n\n";
  int values_size;
  auto values = getArray(values_size);
  cout << "Answer numbers:\n";
  for (int index = 2; index < values_size; index++) {
    if (values[index] < values[index - 2] - values[index - 1]) {
      cout << values[index] << " ";
    }
  }
  cout << "\n";
  cout << "Task 2 is completed\n\n";
  delete[] values;
}

int largestSubsequence(const double* values,
                       int values_size,
                       double& largest_index) {
  int last_index = 0;
  int index = 0;
  int max_subsequence_size = 1;
  while (index < values_size) {
    while (values[index] == values[last_index] && index < values_size) {
      index++;
    }
    if (index - last_index > max_subsequence_size) {
      max_subsequence_size = index - last_index;
      largest_index = last_index;
    }
    last_index = index;
    index++;
  }
  return max_subsequence_size;
}

void findLargestSubsequence() {
  cout << "Task 3: find largest subsequence\n\n";
  int values_size;
  auto values = getArray(values_size);
  double largest_index;
  int largest_subsequence_size =
      largestSubsequence(values, values_size, largest_index);
  cout << "Largest subsequence start from index " << largest_index
       << " and have "
       << largest_subsequence_size << " values\n";
  cout << "Task 3 is completed\n\n";
  delete[] values;
}