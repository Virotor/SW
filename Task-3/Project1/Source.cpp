#include<iostream>
#include<fstream>
using namespace std;

struct docxComp {
	int firstNumb;
	int secondNumb;
	string firstString;
	string secondString;
};

docxComp* resizeArray(int& oldSize, int newSize, docxComp* infFromFile);
docxComp* readInfFromFile(string fileName, int& size);
void  writeInFile(string fileName, docxComp* infFromFile, int size, int openMode);


int main() {
	int size = 1;
	docxComp* infFromFile = readInfFromFile("trpo.txt", size);
	writeInFile("trpo1.txt", infFromFile, size, ios_base::out);
	

	system("Pause");
	return 0;
}

docxComp* readInfFromFile(string fileName, int& size) {
	ifstream file(fileName);
	if (!file.is_open()) {
		return nullptr;
	}
	size <= 0 ? size = 10 : size = size;
	docxComp* infFromFile = new docxComp[size];
	int numberOfLines = 0;

	while (!file.eof()) {
		if (numberOfLines == size) {
			infFromFile = resizeArray(size, size + 1, infFromFile);
		}
		file >> infFromFile[numberOfLines].firstNumb;
		file >> infFromFile[numberOfLines].secondNumb;
		file >> infFromFile[numberOfLines].firstString;
		file >> infFromFile[numberOfLines].secondString;
		numberOfLines++;
	}
	infFromFile = resizeArray(size, numberOfLines - 1, infFromFile);
	file.close();
	return infFromFile;
}

docxComp* resizeArray(int& oldSize, int newSize, docxComp* infFromFile) {
	if (oldSize == newSize) {
		return infFromFile;
	}
	docxComp* newArray = new docxComp[newSize];
	oldSize = newSize < oldSize ? newSize : oldSize;
	for (int i = 0; i < oldSize; i++) {
		newArray[i] = infFromFile[i];
	}
	oldSize = newSize;
	delete[]infFromFile;
	return newArray;
}

void  writeInFile(string fileName, docxComp* infFromFile, int size, int openMode) {
	ofstream file(fileName, openMode);
	if (!file.is_open()) {
		return;
	}
	for (int i = size - 1; i >= 0; i--) {
		file << infFromFile[i].firstNumb << " " << infFromFile[i].secondNumb << " " << infFromFile[i].firstString << " " << infFromFile[i].secondString << endl;
	}
	file.close();
}
