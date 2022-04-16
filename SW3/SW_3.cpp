#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct exam 
{
	int firstNumber = 0;
	double secondNumber = 0;
    string word;
	int thirdNumber = 0;
};

const int NUMBER_IN_LIST = 5;

exam *readExersizeFromFile(string, int &);
void countOfLines();
exam *resizeArray(int &, int, exam *);
void printExeciseInFile(string, exam *, int, int);
int variantNumber();

int variantNumber()
{
    return NUMBER_IN_LIST % 4 + 1;
}

void countOfLines()
{
	char* arr = new char[1024];
	int count = 0;
	ifstream information("text.txt");
    while (!information.eof())
    {
        information.getline(arr, 1024, '\n');
        count++;
    }
    information.close();
    delete arr;

    ofstream file("lines.txt");
	if (!file.is_open()) {
		return;
	}
    file << " file have " << count - 1 << " lines\n Task has done!";
    file.close();
}

exam *readExersizeFromFile(string fileName, int &size)
{
	ifstream file(fileName);
	if (!file.is_open())
	{
		return nullptr;
	}
	size <= 0 ? size = 10 : size = size;
    exam *exercises = new exam[size];
    int numberOfLines = 0;
	while (!file.eof()) 
	{
		if (numberOfLines == size)
		{
			exercises = resizeArray(size, size + 1, exercises);
		}
        file >> exercises[numberOfLines].firstNumber;
        file >> exercises[numberOfLines].secondNumber;
        file >> exercises[numberOfLines].word;
        file >> exercises[numberOfLines].thirdNumber;
        numberOfLines++;
	}
	exercises = resizeArray(size, numberOfLines - 1, exercises);
	file.close();
	return exercises;
}

exam *resizeArray(int &oldSize, int newSize, exam *exercises)
{
	if (oldSize == newSize) 
	{
		return exercises;
	}
    exam *newArray = new exam[newSize];
    oldSize = newSize < oldSize ? newSize : oldSize;
	for (int i = 0; i < oldSize; i++)
	{
		newArray[i] = exercises[i];
	}
	oldSize = newSize;
	delete[] exercises;
	return newArray;
}

void printExeciseInFile(string fileName, exam *exercises, int size, int openMode)
{
	ofstream file(fileName, openMode);
	if (!file.is_open()) {
		return;
	}
	for (int i = size - 1; i >= 0; i--) {
        file
            << exercises[i].firstNumber << " "
            << exercises[i].secondNumber << " "
            << exercises[i].word << " "
            << exercises[i].thirdNumber << endl;
    }
	file.close();
}

int main()
{
    cout << "Variant: " << variantNumber() << endl;
    cout << endl;
    int size = 1;
    exam *exercises = readExersizeFromFile("text.txt", size);
    printExeciseInFile("text.txt", exercises, size, ios_base::app);
    fstream file("text.txt");
    int sizeOfFile = 0;
    file.seekg(0, ios::end);
    sizeOfFile = file.tellg();
    if (sizeOfFile == 1)
    {
        cout << "File has " << sizeOfFile << " byte" << endl;
    }
    else
    {
        cout << "File has " << sizeOfFile << " bytes" << endl;
    }
    file.close();
    countOfLines();
    system("pause");
    return 0;
}