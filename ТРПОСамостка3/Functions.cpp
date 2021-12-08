#include "Functions.h"

exam* readExamFromFile(string fileName, int& size)
{
	ifstream file(fileName);
	if (!file.is_open()){
		return nullptr;
	}

	size <= 0 ? size = 10 : size = size;
	exam* exams = new exam[size];
	int numberOfLines = 0;

	while (!file.eof()){

		if (numberOfLines == size){
			exams = resizeArray(size, size + 1, exams);
		}

		file >> exams[numberOfLines].mark;
		file >> exams[numberOfLines].studentId;
		file >> exams[numberOfLines].nameOfExam;
		file >> exams[numberOfLines].averageMark;
		numberOfLines++;
	}

	return exams;
}

exam* resizeArray(int& oldSize, int newSize, exam* exams)
{
	if (oldSize == newSize){
		return exams;
	}

	exam* newArray = new exam[newSize];
	oldSize = newSize < oldSize ? newSize : oldSize;
	for (int i = 0; i < oldSize; i++){
		newArray[i] = exams[i];
	}

	oldSize = newSize;
	delete[] exams;
	return newArray;
}

void writeExamInFile(string fileName, exam* exams, int size, int openMode)
{
	ofstream file(fileName, openMode);
	if (!file.is_open())
	{
		return;
	}

	for (int i = size - 1; i >= 0; i--)
	{
		file << exams[i].mark << " " 
			<< exams[i].studentId << " " 
			<< exams[i].nameOfExam << " " 
			<< exams[i].averageMark << endl;
	}

	file.close();
	return;
}

int sizeOfFile(string fileName)
{
	fstream file(fileName);
	if (!file.is_open()){
		return 0;
	}

	file.seekg(0, ios_base::end);
	int size = file.tellg();
	file.close();
	return size;
}

void numberOfLines(string fileName)
{
	ifstream file(fileName);
	if (!file.is_open()){
		return;
	}

	string str;
	int numOfLines = 0;
	while (!file.eof()){

		getline(file, str);
		numOfLines++;
	}

	ofstream newFile("numberOfLines.txt");
	if (!newFile.is_open()){
		return;
	}

	newFile << "Numbers of lines: " << numOfLines - 1;
	newFile.close();
}
