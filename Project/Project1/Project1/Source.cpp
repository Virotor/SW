#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct student
{
	int group;
	double mark;
	string surname;
	int rating;
} *students_info;

void showInf(int score);
void size(string path);
void readInf(int score, string file_path, student* students_info);
void writeInf(int score, string file_path, student* students_info);
void sortInf(int score, student* students_info);

int main()
{
	string file_path = "studentInfo.txt";
	int score = 0;
	ifstream file(file_path, ios::in);
	string check;
	while (!file.eof())
	{
		getline(file, check);
		score++;
	}
	cout << score << "\n";
	file.close();
	students_info = new student[score];
	readInf(score, "studentInfo.txt", students_info);
	showInf(score);
	writeInf(score, "studentInfo.txt", students_info);
	size("studentInfo.txt");
	sortInf(score, students_info);
	showInf(score);
}

void showInf(int counter)
{
	for (int i = 0; i < counter; i++)
	{
		cout << students_info[i].surname << " "
			<< students_info[i].group << " "
			<< students_info[i].mark << " "
			<< students_info[i].rating << endl;
	}
}

void size(string file_path)
{
	ifstream file_size(file_path, ios::binary | ios::ate);
	int size = file_size.tellg();
	file_size.close();
	cout << endl;
	cout << "Size: " << size << endl;
}
void readInf(int counter, string file_path, student* students_info)
{
	ifstream file(file_path, ios::in);
	for (int i = 0; i < counter; i++)
	{
		file >> students_info[i].surname
			>> students_info[i].group
			>> students_info[i].mark
			>> students_info[i].rating;
	}
	file.close();
}

void writeInf(int score, string file_path, student* students_info)
{
	ofstream file(file_path, ios::trunc);
	for (int i = score - 1; i >= 0; i--)
	{
		file << students_info[i].surname << " "
			<< students_info[i].group << " "
			<< students_info[i].mark << " "
			<< students_info[i].rating << endl;
	}
	file.close();
}