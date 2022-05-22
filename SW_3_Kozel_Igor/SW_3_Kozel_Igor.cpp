#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct exam
{
	string nameOfExam;
	int mark;
	double averageMark;
	int studentId;
};

exam* readExamFromFile(string fileName, int& size);
exam* resizeArray(int& oldSize, int newSize, exam* exams);
void rewriteExamInFile(string fileName, exam* exams, int size, int openMode);
int sizeOfFile(string fileName);

exam* resizeArray(int& oldSize, int newSize, exam* exams)
{
	if (oldSize == newSize) {
		return exams;
	}

	exam* newArray = new exam[newSize];
	oldSize = newSize < oldSize ? newSize : oldSize;
	for (int i = 0; i < oldSize; i++) {
		newArray[i] = exams[i];
	}

	oldSize = newSize;
	delete[] exams;
	return newArray;
}

exam* readExamFromFile(string fileName, int& size)
{
	ifstream file(fileName);
	if (!file.is_open()) {
		return nullptr;
	}

	size <= 0 ? size = 10 : size = size;
	exam* exams = new exam[size];
	int numberOfLines = 0;

	while (!file.eof()) {

		if (numberOfLines == size) {
			exams = resizeArray(size, size + 1, exams);
		}

		file >> exams[numberOfLines].nameOfExam;
		file >> exams[numberOfLines].mark;
		file >> exams[numberOfLines].averageMark;
		file >> exams[numberOfLines].studentId;
		numberOfLines++;
	}

	return exams;
}

void rewriteExamInFile(string fileName, exam* exams, int size, int openMode)
{
	ofstream file(fileName, openMode);
	if (!file.is_open())
	{
		return;
	}

	for (int i = size - 1 ; i >= 0; i--)
	{
		file << exams[i].nameOfExam << " "
			<< exams[i].mark << " "
			<< exams[i].averageMark << " "
			<< exams[i].studentId << endl;
	}

	file.close();
	return;
}

void turnOverExamInFile(string fileName, exam* exams, int size, int openMode)
{
	ofstream file(fileName, openMode);
	if (!file.is_open())
	{
		return;
	}

	for (int i = 0; i < size; i++)
	{
		file << exams[i].studentId << " "
			<< exams[i].averageMark << " "
			<< exams[i].mark << " "
			<< exams[i].nameOfExam << endl;
	}

	file.close();
	return;
}

int sizeOfFile(string fileName)
{
	fstream file(fileName);
	if (!file.is_open()) {
		return 0;
	}

	file.seekg(0, ios_base::end);
	int size = file.tellg();
	file.close();
	return size;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int size = 1;
	exam* exams = readExamFromFile("file.txt", size);
	rewriteExamInFile("file.txt", exams, size, ios_base::out);
	turnOverExamInFile("file1.txt", exams, size, ios_base::out);
	cout << "Размер файла (в байтах): " << sizeOfFile("file1.txt") << ".";
}