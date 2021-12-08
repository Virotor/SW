#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct exercise 
{
	string word;
	int number = 0;
	double average = 0;
	int index = 0;
};

exercise* readExersizeFromFile(string fileName, int& size);

void howmanylines();

exercise* resizeArray(int& oldSize, int newSize, exercise* exercises);

void REprintExeciseInFile(string fileName, exercise* exercises, int size, int openMode);


int main() 
{

	int size = 1;

	exercise* exercises = readExersizeFromFile("file.txt", size);
	REprintExeciseInFile("file.txt", exercises, size, ios_base::app);
	
	fstream file("file.txt");
	int sizeoffile = 0;
	file.seekg(0, ios::end);
	sizeoffile = file.tellg();
	cout << "file have - " << sizeoffile << " byte" << endl;
	file.close();
	howmanylines();
	cout << "work was ended\n";
	system("pause");

	return 0;
}

void howmanylines()
{
	char* str = new char[1024];
	int i = 0;
	ifstream base("file.txt");
	while (!base.eof())
	{
		base.getline(str, 1024, '\n');
		i++;
	}
	base.close();
	delete str;
	
	ofstream file("file1.txt");
	if (!file.is_open()) {
		return;
	}
	file << " file have " << i - 1 << " lines\n";
	file.close();
	
}

exercise* readExersizeFromFile(string fileName, int& size)
{
	ifstream file(fileName);
	if (!file.is_open())
	{
		return nullptr;
	}
	size <= 0 ? size = 10 : size = size;
	exercise* exercises = new exercise[size];
	int numberOfLines = 0;
	while (!file.eof()) 
	{
		if (numberOfLines == size)
		{
			exercises = resizeArray(size, size + 1, exercises);
		}	
		file >> exercises[numberOfLines].number;
		file >> exercises[numberOfLines].average;
		file >> exercises[numberOfLines].word;
		file >> exercises[numberOfLines].index;
		numberOfLines++;
	}
	exercises = resizeArray(size, numberOfLines - 1, exercises);
	file.close();
	return exercises;
}

exercise* resizeArray(int& oldSize, int newSize, exercise* exercises)
{
	if (oldSize == newSize) 
	{
		return exercises;
	}
	exercise* newArray = new exercise[newSize];
	oldSize = newSize < oldSize ? newSize : oldSize;
	for (int i = 0; i < oldSize; i++)
	{
		newArray[i] = exercises[i];
	}
	oldSize = newSize;
	delete[] exercises;
	return newArray;
}

void REprintExeciseInFile(string fileName, exercise* exercises, int size, int openMode)
{
	ofstream file(fileName, openMode);
	if (!file.is_open()) {
		return;
	}
	for (int i = size - 1; i >= 0; i--) {
		file 
			<< exercises[i].number << " "
			<< exercises[i].average << " "
			<< exercises[i].word << " "
			<< exercises[i].index << endl;
	}
	file.close();
}