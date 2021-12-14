#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct samRab
{
	string str;
	int firstNum = 0;
	double secondNum = 0;
	int thirdNum = 0;
};

samRab* resizeArray(int& oldSize, int newSize, samRab* work);

samRab* readSamRabFromFile(string fileName, int& size) {
	ifstream file(fileName.c_str());
	if (!file.is_open()) {
		return nullptr;
	}
	size = 1;
	samRab* work = new samRab[size];
	int numberOfLines = 0;
	while (!file.eof())
	{
		if (numberOfLines == size) 
		{
			work = resizeArray(size, size * 2, work);
		}
		file >> work[numberOfLines].str;
		file >> work[numberOfLines].firstNum;
		file >> work[numberOfLines].secondNum;
		file >> work[numberOfLines].thirdNum;
		numberOfLines++;
	}
	file.close();
	return work;
}

samRab* resizeArray(int& oldSize, int newSize, samRab* work) {
	if (oldSize == newSize)
	{
		return work;
	}
	samRab* newArray = new samRab[newSize];
	oldSize = newSize < oldSize ? newSize : oldSize;
	for (int i = 0; i < oldSize; i++)
	{
		newArray[i] = work[i];	
	}
	oldSize = newSize;
	delete[] work;
	return newArray;
}
void writeSamRabInFile(string fileName
	, samRab* work
	, int size) {
	ofstream file(fileName, iostream::app);
	if (!file.is_open()) {
		return;
	}
	for (int i = 0; i < size; i++)
	{
		file << endl << work[i].str << " " << work[i].firstNum << " " << work[i].secondNum << " " << work[i].thirdNum;
	}
	file.close();
}

void readWrite() {
    int size;
    const string filename = "SamRab3.txt";
	samRab* file = readSamRabFromFile(filename, size);
	writeSamRabInFile(filename, file, size);
}

int getSize(string fileName) {
	ifstream file(fileName, ios_base::binary | ios_base::ate);
	int size = file.tellg();
	file.close(); 
	return size;
}

void sizeOfFile() {
	const string fileName = "SamRab3.txt";
	cout << getSize(fileName) << endl;
}

void newFile(string from, string to, char letter) {
	ifstream fin(from);
	ofstream fout(to);
	if (!fin.is_open() || !fout.is_open()) {
		return;
	}
	string buf_str;
	while (!fin.eof()) {
		getline(fin, buf_str);
		if (buf_str.find(letter) != string::npos) {
			fout << buf_str << endl;
		}
	}
	fin.close();
	fout.close();
}

void letter() {
	const string fromFile = "SamRab3.txt",
		toFile = "SamRab333.txt";
	char let;
	cout << "Enter letter to find them: ";
	cin >> let;
	newFile(fromFile, toFile, let);
}

int main() {
	readWrite();
	sizeOfFile();
	letter();
}