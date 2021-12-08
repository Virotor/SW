#include <iostream>
#include <fstream>
#include <conio.h>
#include <time.h>
using std::string;
using std::cin;
using std::cout;

const string FILE_OPEN_ERROR = "\nCan't open the file\n";

void workWithSomeStruct();

void workWithFileSize();

void transferWords();

int main() {
  // workWithSomeStruct();
  // workWithFileSize();
  transferWords();
  return 0;
}

struct SomeStruct {
  int val1 = 0;
  double val2 = 0;
  string str1;
  int val3;
};

void resizeArray(SomeStruct*& arr, int& size) {
  auto new_arr = new SomeStruct[size * 2];
  for (int index = 0; index < size; ++index) {
    new_arr[index] = arr[index];
  }
  delete[] arr;
  size *= 2;
  arr = new_arr;
}
void resizeArray(string*& arr, int& size) {
  auto new_arr = new string[size * 2];
  for (int index = 0; index < size; ++index) {
    new_arr[index] = arr[index];
  }
  delete[] arr;
  size *= 2;
  arr = new_arr;
}

SomeStruct* createArrayFromFile(const string& fileName, int& size) {
  std::ifstream fin(fileName.c_str());
  size = 0;
  if (!fin.is_open()) {
    cout << FILE_OPEN_ERROR;
    return nullptr;
  }
  const int START_SIZE = 16;
  int MAX_SIZE = START_SIZE;
  auto arr = new SomeStruct[START_SIZE];
  while (fin >> arr[size].val1 >> arr[size].val2 >> arr[size].str1
             >> arr[size].val3) {
    size++;
    if (size + 1 == MAX_SIZE) {
      resizeArray(arr, MAX_SIZE);
    }
  }
  fin.close();
  return arr;
}

void printAdditionalArrayToFile(const string& fileName, SomeStruct* arr, int& size) {
  std::ofstream fout(fileName.c_str(), std::iostream::app);
  if (!fout.is_open()) {
    cout << FILE_OPEN_ERROR;
  }
  for (int index = size - 1; index >= 0; --index) {
    fout << arr[index].val1 << ' ' << arr[index].val2 << ' ' << arr[index].str1
         << ' ' << arr[index].val3 << '\n';
  }
  fout.close();
}

void deleteArray(SomeStruct* arr) {
  delete[] arr;
}

void generateInputFile(const string& fileName, int cnt) {
  srand(time(0));
  const int MAX_SHORT_INT = (1 << 15) - 1;
  std::ofstream fout(fileName.c_str());
  int mod = cnt + 1000;
  while(cnt > 0) {
    fout << rand() % mod << ' ' << rand() % mod + 1. * rand() / MAX_SHORT_INT << " someStr" << rand() % mod << ' ' << rand() << '\n';
    cnt--;
  }
  fout.close();
}

void workWithSomeStruct() {
  cout << "Generate file? [Y/N]";

  char user_answer;
  cin >> user_answer;

  string file_name;
  if(user_answer == 'Y' || user_answer == 'y') {
    cout << "Enter filename to generate input values: ";
    cin >> file_name;
    cout << "Enter number of records: \n";
    int records_count;
    cin >> records_count;
    generateInputFile(file_name, abs(records_count));

    cout << "File generated\n";
    system("pause");
  } else {
    cout << "Enter filename to read array of struct: ";
    cin >> file_name;
  }
  int arr_size;
  SomeStruct* arr = createArrayFromFile(file_name, arr_size);
  printAdditionalArrayToFile(file_name, arr, arr_size);
  cout << "Array is printed\n";
  deleteArray(arr);
}

int getFileSize(const string& fileName) {
  std::ifstream file(fileName.c_str(), std::ifstream::ate | std::ifstream::binary);
  if(!file.is_open()) {
    cout << FILE_OPEN_ERROR;
    return 0;
  }
  int size = file.tellg();
  file.close();
  return size;
}

void workWithFileSize() {
  cout << "Enter filename to get size: ";
  string fileName;
  cin >> fileName;
  cout << "File size = " << getFileSize(fileName) << " bytes\n";
}

string* createStringArrayFromFile(const string& fileName, int& size) {
  size = 0;
  std::ifstream fin(fileName.c_str());
  if(!fin.is_open()) {
    cout << FILE_OPEN_ERROR;
    return nullptr;
  }
  const int START_SIZE = 16;
  int MAX_SIZE = START_SIZE;
  auto arr = new string[START_SIZE];
  while(getline(fin, arr[size])) {
    size++;
    if(size == MAX_SIZE) {
      resizeArray(arr, MAX_SIZE);
    }
  }
  fin.close();
  return arr;
}

void printStringArrayToFile(const string& fileName, string* arr, int size, char let) {
  std::ofstream fout(fileName.c_str());
  if(!fout.is_open()) {
    cout << FILE_OPEN_ERROR;
    return;
  }
  int cnt = 0;
  for (int index = 0; index < size; ++index) {
    if(arr[index].find(let) != string::npos) {
      fout << arr[index] << '\n';
      cnt++;
    }
  }
  cout << "Moved rows: " << cnt << '\n';
  fout.close();
}

void transferWords() {
  string input_filename;
  string output_filename;
  cout << "Enter filename of input file: ";
  cin >> input_filename;
  cout << "Enter filename of output file: ";
  cin >> output_filename;
  cout << "Enter letter to find in strings to transfer\n";
  char let;
  cin >> let;
  int size;
  string* arr = createStringArrayFromFile(input_filename, size);
  printStringArrayToFile(output_filename, arr, size, let);
}