#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct task{
	string str;
	int num1;
	double num2;
	int num3;
};


task *resizeArray(int&, int, task*);
task* readFromFile(string fileName, int& size);
void writeTaskInFile(string fileName, task* tasks, int size, int openMode);


task* readFromFile(string fileName, int& size)
{
	ifstream file(fileName);
	if (!file.is_open()) {
		return nullptr;
	}

	size <= 0 ? size = 10 : size = size;
	task* tasks = new task[size];
	int numberOfLines = 0;

	while (!file.eof()) {

		if (numberOfLines == size) {
			tasks = resizeArray(size, size + 1, tasks);
		}

		file >> tasks[numberOfLines].str;
		file >> tasks[numberOfLines].num1;
		file >> tasks[numberOfLines].num2;
		file >> tasks[numberOfLines].num3;
		numberOfLines++;
	}
	tasks = resizeArray(size, numberOfLines - 1, tasks);
	file.close();
	return tasks;
}

task *resizeArray(int& oldSize, int newSize, task* tasks){
	if (oldSize == newSize) {
		return tasks;
	}

	task* newArray = new task[newSize];
	oldSize = newSize < oldSize ? newSize : oldSize;
	for (int i = 0; i < oldSize; i++) {
		newArray[i] = tasks[i];
	}
	oldSize = newSize;
	delete[] tasks;
	return newArray;
}

void writeTaskInFile(string fileName, task* tasks, int size, int openMode)
{
	ofstream file(fileName, openMode);
	if (!file.is_open()){
		return;
	}

	for (int i = 0; i<size; i++){
		file << tasks[i].str << " "<< tasks[i].num1 << " "<< tasks[i].num2 << " "<< tasks[i].num3 << endl;
	}

	file.close();
	return;
}
int main() {
	int size = 1;
	task* tasks = readFromFile("text.txt", size);
	writeTaskInFile("text1.txt", tasks, size, ios_base::out);
	fstream file("text.txt");
	int sizeOfFile = 0;
	file.seekg(0, ios::end);
	sizeOfFile = file.tellg();

	if (sizeOfFile == 1) {
		cout << "File" << sizeOfFile << "byte" << endl;
	}
	else {
		cout << "File" << sizeOfFile << "bytes" << endl;
	}
}


 