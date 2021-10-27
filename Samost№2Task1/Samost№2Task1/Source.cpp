#include<iostream>
#include<ctime>
#include<string>
#include<conio.h>
using namespace std;
void RandomOne_dimensionalArray(int, int*);
void InputOne_dimensionalArray(int, int*);
void ShowOne_dimensionalArray(int, int*);
void searchSubstring();
void ShowPosition();
void searchNumbers();
int main() {


	
	searchNumbers();

	system("pause");

	return 0;
}

void RandomOne_dimensionalArray(int sizeArray, int* Array) {
	int i;
	srand(time(NULL));
	int minRandom, maxRandom;
	cout << "Minimum random number =";
	cin >> minRandom;
	cout << endl;
	cout << "Maximum random number =";
	cin >> maxRandom;
	cout << endl;
	int g;
	g = maxRandom - minRandom + 1;
	for (i = 0; i < sizeArray; i++)
	{
		Array[i] = rand() % g + minRandom;

	}


}
void InputOne_dimensionalArray(int sizeArray, int* Array) {
	int i;
	cout << "Please, enter " << sizeArray << " numbers" << endl;
	for (i = 0; i < sizeArray; i++)
	{
		cin >> Array[i];

	}
}
void ShowOne_dimensionalArray(int sizeArray, int* Array) {
	int i;
	for (i = 0; i < sizeArray; i++)
	{
		cout << Array[i] << " ";

	}

	cout << endl;
}
void ShowPosition() {
	int sizeArray;
	cout << "Enter the size of the array" << endl;
	cin >> sizeArray;
	int* array = new int[sizeArray];
	cout << "Choose the method to fill the array" << endl;
	cout << "1.Random(default)" << endl << "2.From the keyboard" << endl;
	char FillingMethod;
	FillingMethod = _getch();
	cout << FillingMethod << endl;
	switch (FillingMethod)
	{
	case '1':default: {
		RandomOne_dimensionalArray(sizeArray, array);

		break; }
	case'2': {
		InputOne_dimensionalArray(sizeArray, array);
		break;
	}
	}
	cout << "Array:" << endl;
	ShowOne_dimensionalArray(sizeArray, array);
	int number;
	cout << "Enter number" << endl;
	cin >> number;
	int i;
	bool flag = false;
	for (i = 0; i < sizeArray; i++)
	{
		if (array[i] == number) {
			cout << "Position = " << i << endl;
			flag = true;
			break;
		}
	}
	if (flag == false) {

		cout << "There is no such number in the array" << endl;
	}

	delete[]array;

}
void searchSubstring() {
	cout << "Additional task" << endl;

	cout << "Enter symbols:" << endl;
	string mainstring;

	getline(cin, mainstring);
	int length_mainstring;
	length_mainstring = mainstring.length();
	string substring;
	cout << "Enter symbols,which we will look for:" << endl;
	getline(cin, substring);
	int length_substring;
	length_substring = substring.length();
	int i1, j1, j2;
	bool flag1 = false;
	for (i1 = 0; i1 < length_mainstring; i1++)
	{
		if (mainstring[i1] == substring[0]) {
			for (j1 = i1, j2 = 0; j2 < length_substring; j1++, j2++) {
				if (mainstring[j1] != substring[j2]) {
					break;
				}
				if (j2 == length_substring - 1) {
					cout << "Number = " << i1 << endl;
					flag1 = true;

				}

			}
		}
		if (flag1 == true)
			break;
	}
	if (flag1 == false)
		cout << "There is no such substring in the string" << endl;
};
void searchNumbers(){
	int sizeArray;
	cout << "Enter the size>2 of the array" << endl;//i didn't check to save time
	cin >> sizeArray;
	int* array = new int[sizeArray];
	cout << "Choose the method to fill the array" << endl;
	cout << "1.Random(default)" << endl << "2.From the keyboard" << endl;
	char FillingMethod;
	FillingMethod = _getch();
	cout << FillingMethod << endl;
	switch (FillingMethod)
	{
	case '1':default: {
		RandomOne_dimensionalArray(sizeArray, array);

		break; }
	case'2': {
		InputOne_dimensionalArray(sizeArray, array);
		break;
	}
	}
	cout << "Array:" << endl;
	ShowOne_dimensionalArray(sizeArray, array);
	int i, difference;
	bool flag = false;
	cout << "Result:" << endl;
	for (i = 2; i < sizeArray; i++) {
		difference = array[i - 2] - array[i - 1];
		if (array[i] < difference) {
			flag = true;
			cout << array[i] << " ";
		}


	}
	cout << endl;
	if (flag == false)
		cout << "There is no such number in the array" << endl;

	delete[]array;
}