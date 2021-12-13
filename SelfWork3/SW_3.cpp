#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

struct SingleData
{
	string name = "M4";
	int index = 0;
	double cost = 0.0;
	int count = 0;
};


SingleData* ReadDataFromFile(string, int&);
void WriteDataInFile(string, SingleData*, int, int);
void WriteDataInReverse(string, SingleData*, int, int);
int getCountOfRows(string);
int GetFileSize(string);
void SortDataByCost(SingleData*, int);
#pragma endregion

int main()
{
	string fileName = "Data.txt";

	int size = 0;
	SingleData* data = ReadDataFromFile(fileName, size);
	WriteDataInFile(fileName, data, size, ios_base::out);
	WriteDataInReverse(fileName, data, size, ios_base::out);
	int fileSize = GetFileSize(fileName);
	cout << "File size = " << fileSize;
	data = ReadDataFromFile(fileName, size);
	SortDataByCost(data, size);
	WriteDataInFile(fileName, data, size, ios_base::out);
}

#pragma region Functions
int getCountOfRows(string fileName)
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

SingleData* ReadDataFromFile(string fileName, int& size)
{
	ifstream file(fileName);
	if (!file.is_open())
		return nullptr;
	size = getCountOfRows(fileName);
	SingleData* data = new SingleData[size];
	int index = 0;
	while (!file.eof())
	{
		file >> data[index].name;
		file >> data[index].index;
		file >> data[index].cost;
		file >> data[index].count;
		index++;
	}
	file.close();
	return data;
}

void WriteDataInFile(string fileName, SingleData* data, int size, int openMode)
{
	ofstream file(fileName, openMode);
	if (!file.is_open())
		return;
	for (int i = 0; i < size; i++)
	{
		file << data[i].name << " " << data[i].index << " " << data[i].cost << " " << data[i].count << endl;
	}
	file.close();
}

void WriteDataInReverse(string fileName, SingleData* data, int size, int openMode)
{
	ofstream file(fileName, openMode);
	if (!file.is_open())
		return;
	for (int i = size - 1; i >= 0; i--)
	{
		file << data[i].name << " " << data[i].index << " " << data[i].cost << " " << data[i].count << endl;
	}
	file.close();
}

int GetFileSize(string fileName)
{
	ifstream file(fileName);
	if (!file.is_open())
		return 0;
	int fileSize = 0;
	file.seekg(0, ios_base::end);
	fileSize = file.tellg();
	file.close();
	return fileSize;
}

bool Compare(SingleData left, SingleData right)
{
	if (left.cost < right.cost)
		return 1;
	else
		return 0;
}

void SortDataByCost(SingleData* data, int size)
{
	sort(data, data + size, Compare);
}