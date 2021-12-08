#include <iostream>
#include <fstream>
#include <string>
using namespace std;


struct exam {
	int studentId;
	int mark;
	string nameOfExam;
	string studentName;
};

int getFileSize(const char* fileName)
{
	struct stat file_stat;
	stat(fileName, &file_stat);
	return file_stat.st_size;
}

int main()
{
	exam stud1, stud2, stud3, stud4, stud5, stud6, stud7, stud8;
	stud1 = { 10,1,"TRPO","Mihail"};
	stud2 = { 9,2,"TRPO","Daniil" };
	stud3 = { 8,3,"TRPO","Irina" };
	stud4 = { 9,4,"TRPO","Maxim" };
	stud5 = { 7,5,"TRPO","Alexey" };
	stud6 = { 8,6,"TRPO","Egor" };
	stud7 = { 8,7,"TRPO","Karina" };
	stud8 = { 9,8,"TRPO","Nikita" };

	ofstream file("Exam.txt");

	if (!file)
	{
		cout << "Exam.txt could not be opened for writing!" << endl;
		return 0;
	}
	else
	{
		file << stud1.studentId << " " << stud1.mark << " " << stud1.nameOfExam << " " << stud1.studentName << endl;
		file << stud2.studentId << " " << stud2.mark << " " << stud2.nameOfExam << " " << stud2.studentName << endl;
		file << stud3.studentId << " " << stud3.mark << " " << stud3.nameOfExam << " " << stud3.studentName << endl;
		file << stud4.studentId << " " << stud4.mark << " " << stud4.nameOfExam << " " << stud4.studentName << endl;
		file << stud5.studentId << " " << stud5.mark << " " << stud5.nameOfExam << " " << stud5.studentName << endl;
		file << stud6.studentId << " " << stud6.mark << " " << stud6.nameOfExam << " " << stud6.studentName << endl;
		file << stud7.studentId << " " << stud7.mark << " " << stud7.nameOfExam << " " << stud7.studentName << endl;
		file << stud8.studentId << " " << stud8.mark << " " << stud8.nameOfExam << " " << stud8.studentName << endl;
	}
	file.close();
	ifstream infFromExam("Exam.txt");
	string strInput;
	int numberOfRows = 0;
	if (!infFromExam)
	{
		cout << "Exam.txt could not be opened for reading!" << endl;
		return 0;
	}
	else
	{
		while (infFromExam)
		{
			getline(infFromExam, strInput);
			if (!infFromExam.eof()) {
				numberOfRows++;
			}
		}
		cout << "Number of rows: " << numberOfRows << endl;
	}
	ofstream fille("ExamEdited.txt");


	if (!fille)
	{
		cout << "ExamEdited.txt could not be opened for writing!" << endl;
		return 0;
	}
	else
	{
		fille << stud8.studentId << " " << stud8.mark << " " << stud8.nameOfExam << " " << stud8.studentName << endl;
		fille << stud7.studentId << " " << stud7.mark << " " << stud7.nameOfExam << " " << stud7.studentName << endl;
		fille << stud6.studentId << " " << stud6.mark << " " << stud6.nameOfExam << " " << stud6.studentName << endl;
		fille << stud5.studentId << " " << stud5.mark << " " << stud5.nameOfExam << " " << stud5.studentName << endl;
		fille << stud4.studentId << " " << stud4.mark << " " << stud4.nameOfExam << " " << stud4.studentName << endl;
		fille << stud3.studentId << " " << stud3.mark << " " << stud3.nameOfExam << " " << stud3.studentName << endl;
		fille << stud2.studentId << " " << stud2.mark << " " << stud2.nameOfExam << " " << stud2.studentName << endl;
		fille << stud1.studentId << " " << stud1.mark << " " << stud1.nameOfExam << " " << stud1.studentName << endl;
	}
	fille.close();

	cout << "Size of Exam.txt = " << getFileSize("Exam.txt") << " bytes" << endl;
	cout << "Size of ExamEdited.txt = " << getFileSize("ExamEdited.txt") << " bytes" << endl;

	ofstream numberRows("NumberOfRows.txt");
	if (!numberRows)
	{
		cout<< "NumberOfRows.txt could not be opened for writing!" << endl;
		return 0;
	}
	else {
		numberRows <<"Number of rows in Exam.txt is " << numberOfRows;
		cout << endl;
	}

	

}