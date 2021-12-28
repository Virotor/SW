#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

struct exam
{
	int mark;
	double averageMarkLabs;
	string nameOfExam;
	int studentId;
};

int getNumberOfLines(string fileName);
exam* ReadDataFromFile(string fileName, int& size);
void WriteDataInFile(string fileName, exam* data, int size);
void WriteDataInReverse(string fileName, exam* data, int sizeofFile);
int getFileSize(string fileName);

int main()
{
	string fileName = "examData.txt";
	int sizeOfFile = 0;
	exam* data = ReadDataFromFile(fileName, sizeOfFile);
	WriteDataInFile(fileName, data, sizeOfFile);
	WriteDataInReverse(fileName, data, sizeOfFile);
	int fileSize = getFileSize(fileName);
	cout << "Size of file:" << fileName;
}

int getFileSize(string fileName)
{
	ifstream file(fileName);
	if (!file.is_open())
		return 0;
	int fileSize = 0;
	file.seekg(0,ios_base::end);
	fileSize = file.tellg();
	file.close();
	return fileSize;
}

void WriteDataInFile(string fileName, exam* data, int size)
{
	ofstream file(fileName);
	if (!file.is_open())
	{
		cout << "We can't open file";
		return;
	}
	for (int i = 0; i < size; i++)
	{
		file << data[i].mark << " " << data[i].averageMarkLabs << " " << data[i].nameOfExam << " " << data[i].studentId << endl;
	}
	file.close();
}

void WriteDataInReverse(string fileName, exam* data, int sizeOfFile)
{
	ofstream file(fileName);
	if (!file.is_open())
	{
		cout << "We can't open file";
		return;
	}
	for (int i = sizeOfFile; i > -1; i--)
	{
		file << data[i].mark << " " << data[i].averageMarkLabs << " " << data[i].nameOfExam << " " << data[i].studentId << endl;
	}
	file.close();
}

int getNumberOfLines(string fileName)
{
	ifstream file(fileName);
	string string;
	int size = 0;
	if (!file.is_open())
		return 0;
	while (getline(file, string))
		size++;
	file.close();
	return size;
}
exam* ReadDataFromFile(string fileName, int& size)
{
	ifstream file(fileName);
	if (!file.is_open())
		return nullptr;
	size = getNumberOfLines(fileName);
	exam* data = new exam[size];
	int index = 0;
	while (!file.eof())
	{
		file >> data[index].mark;
		file >> data[index].averageMarkLabs;
		file >> data[index].nameOfExam;
		file >> data[index].studentId;
		index++;
	}
	file.close();
	return data;
}
bool Compare(exam left, exam right)
{
	if (left.averageMarkLabs < right.averageMarkLabs)
		return 1;
	else
		return 0;
}

void SortDataByCost(exam* data, int size)
{
	sort(data, data + size, Compare);
}
