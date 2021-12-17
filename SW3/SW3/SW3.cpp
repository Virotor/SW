
#include "Header.h"

exam * readExamFromFile(std::string path, int& size)
{
	std::ifstream file(path);
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

void writeExamInFile(std::string path, exam* exams, int size, int openMode)
{
	std::ofstream file(path, openMode);
	if (!file.is_open())
	{
		return;
	}

	size += 1;
	for (int i = size - 1; i >= 0; i--)
	{
		file << exams[i].mark << " " << exams[i].id << " " << exams[i].nameOfExam << " " << exams[i].averageMarkLabs << std::endl;
	}

	file.close();
	return;
}

int sizeOfFile(std::string path)
{
	std::fstream file(path);
	if (!file.is_open())
	{
		return 0;
	}

	file.seekg(0, std::ios_base::end);
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

	newFile << numOfLines - 1;
	newFile.close();
}
