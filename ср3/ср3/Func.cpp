#include "Func.h"
using namespace std;
exam* readExamFromFile(string path, int& size)
{
	ifstream file(path);
	if (!file.is_open())
	{
		return nullptr;
	}

	size <= 0 ? size = 10 : size = size;
	exam* exams = new exam[size];
	int numberOfLines = 0;
	while (true)
	{
		if (numberOfLines == size)
		{
			exams = resizeArray(size, size + 1, exams);
		}

		file >> exams[numberOfLines].mark;
		file >> exams[numberOfLines].id;
		file >> exams[numberOfLines].nameOfExam;
		file >> exams[numberOfLines].averageMarkLabs;

		if (file.eof())
		{
			size--;
			break;
		}
		numberOfLines++;
	}

	file.close();
	return exams;
}

exam* resizeArray(int& oldSize, int newSize, exam* exams)
{
	if (oldSize == newSize)
	{
		return exams;
	}

	exam* newArray = new exam[newSize];
	oldSize = newSize < oldSize ? newSize : oldSize;
	for (int i = 0; i < oldSize; i++)
	{
		newArray[i] = exams[i];
	}

	oldSize = newSize;
	delete[] exams;
	return newArray;
}

void writeExamInFile(string path, exam* exams, int size, int openMode)
{
	ofstream file(path, openMode);
	if (!file.is_open())
	{
		return;
	}

	for (int i = size; i >= 0; i--)
	{
		file << exams[i].mark << " " << exams[i].id << " " << exams[i].nameOfExam << " " << exams[i].averageMarkLabs << std::endl;
	}

	file.close();
	return;
}



int sizeOfFile(std::string path)
{
	fstream file(path);
	if (!file.is_open())
	{
		return 0;
	}

	file.seekg(0, ios_base::end);
	int size = file.tellg();
	file.close();
	return size;
}

void numberOfLines(string path)
{
	ifstream file(path);
	if (!file.is_open())
	{
		return;
	}
	string str;
	int numOfLines = 0;
	while (!file.eof())
	{
		getline(file, str);
		numOfLines++;
	}

	ofstream newFile("numberOfLines.txt");
	if (!newFile.is_open())
	{
		return;
	}

	newFile <<"Number of lines is " << numOfLines - 1;
	newFile.close();
}
