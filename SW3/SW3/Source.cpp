#include<iostream>
#include <math.h>
#include <ctime>
#include <fstream>
#include<string>
#include<io.h>

using namespace std;

int fileSize(const char* add) {
	ifstream mySource;
	mySource.open(add, ios_base::binary);
	mySource.seekg(0, ios_base::end);
	int size = mySource.tellg();
	mySource.close();
	return size;
}

exam* resizeArray(int& oldsize, int newsize, exam* exams) {
	if (oldsize == newsize) {
		return exams;
	}
	exam* newArray = new exam[newSize];
	oldsize = newSize < oldsize ? newSize : oldsize;
	for (int i = 0; i < oldSize; i++) {
		newArray[i] = exams[i];
	}
	oldsize = newSize;
	delete[] exams;
	return newArray;
}

void writeExamInFile(string fileName, exam* exams, int size, int openMode) {
	ofstream file(fileName, openMode);
	if (!file.is_open()) {
		return;
	}
	for (int i = 0; i < size; i++) {
		file << exams[i].nameOfExam << " "
			<< exams[i].mark << " "
			<< exams[i].studentId << " "
			<< exams[i].averageMarkLabs << endl;
	}
}

int main() {
	setlocale(LC_ALL, "ru");

	struct exam {
		string nameOfExam;
		int mark;
		int studentId;
		double averageMarkLabs;
	};

	string result = "";
	ifstream file("SW.txt");
	if (!file.is_open()) {
		return ;
	}

	int size;
	cout << "Size: ";           cin >> size;
	size <= 0 ? size = 10 : size = size;
	exam* exams = new exam[size];
	int numOfLines = 0;



	while (!file.eof()) {
		if (numOfLines == size) {
			exams = resizeArray(size, size + 1, exams);
		}
		file >> exams[numOfLines].nameOfExam;
		file >> exams[numOfLines].mark;
		file >> exams[numOfLines].studentId;
		file >> exams[numOfLines].averageMarkLabs;
		numOfLines++;
	}
	int size = 1;
	exam* exams = readExamFromFile("text.txt", size);
	writeExamInFile("text1.txt", exams, size, ios_base::out);
	ofstream file(fileName, openMode);
	if (!file.is_open()) {
		return;
	}
	for (int i = 0; i < size; i++) {
		file << data[i] << endl;

	}
	file.close();
	ifstream file(fileName);
	if (!file.is_open()) {
		return nullptr;
	}
	size <= 0 ? size = 10 : size = sise;
	string* data = new string[size];
	int numOfLines = 0;
	while (!file.eof()) {
		if (numberOfLines == size) {
			data = resizeArray(size, size + 1, data);
		}
		(file, data[numOfLines]);
		numOfLines++;
	}
	data = resizeArray(size, numOfLines - 1, data);
	file.close();

	exams = resizeArray(size, numOfLines - 1, exams);
	file.close();

	return data;


	delete[] exam;*/


	int fd;
	char ch;
	int count = 0;
	while (!eof(fd)) {
		count++;
	}
	close(fd);

	fileSize();

	ifstream in("S3.txt");
	ofstream out("S3.2.txt");
	string line;
	string match;

	cout << "Enter letter:\n";
	cin >> match;

	while (getline(in, line))
	{
		if (line.find(match) != string::npos)
			out << line << '\n';
	}

	system("pause");
	return 0;
}