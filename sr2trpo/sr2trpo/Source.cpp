#include <iostream>
#include <string>


using namespace std;




void deleteMatrix(int* arr[], int row);

int** transponSecDiag(int* arr[], int row, int col);

int** transponMainDiag(int* arr[], int row, int col);

int** printMatrix(int row, int col);

void deleteArray(int arr[]);

void searchSubStringOfString(string mass, string searchMass);

void* searchNum(int arr[], int num, int col);

int* printArray(int col);

void searchLongLine(int arr[], int col);

void* searchNums(int arr[], int col);

int main() {

	srand(time(NULL));


	int col = 1;
	int num;
	int task;
	int row = 1;


	cout << "Выбор задания" << endl;
	cin >> task;

	switch (task)
	{

	case 1:
	{
		string trash;
		string mass;
		string searchMass;


		cout << "Введите размер массива " << endl;
		cin >> col;

		if (!cin)
		{
			return 1;
		}

		cout << "Искомое число" << endl;
		cin >> num;

		if (!cin)
		{
			return 1;
		}


		searchNum(printArray(col), num, col);

		cout << "Введите строку" << endl;

		getline(cin, trash);
		getline(cin, mass);


		cout << "Введите подстроку" << endl;
		getline(cin, searchMass);

		searchSubStringOfString(mass, searchMass);

		break;
	}
	case 2:
	{



		cout << "Введите размер массива " << endl;
		cin >> col;

		if (!cin)
		{
			return 1;
		}
		searchNums(printArray(col), col);

		break;
	}

	case 3: {



		cout << "Введите размер массива " << endl;
		cin >> col;

		if (!cin)
		{
			return 1;
		}
		searchLongLine(printArray(col), col);
		break;
	}
	case 4:
	{

		cout << "Введите размер матрицы" << endl;
		cin >> row;

		if (!cin)
		{
			return 1;
		}

		col = row;//забыл что только с квадратной работал,поэтому ввел 2 переменные.А после стало лень переписывать( ибо уже ночь



		transponSecDiag(transponMainDiag(printMatrix(row, col), row, col), row, col);

		break;
	}

	default:
		break;
	}





}



void deleteArray(int arr[]) {

	delete[] arr;

}

void searchSubStringOfString(string mass, string searchMass) {
	int c;
	int a;
	int check = 0;
	int j;
	for (int i = 0; i < mass.length(); i++)
	{
		if (searchMass[0] == mass[i])
		{
			for (j = 1, c = i + 1; j <= searchMass.length() || c <= mass.length(); j++, c++)
			{

				if (searchMass[j] == mass[c])
				{
					check++;
					continue;
				}
				else
				{
					break;
				}
			}

			if (check == searchMass.length() - 1)
			{
				continue;
			}

			cout << "Начинается с индекса " << i << endl;
			break;

		}

	}

	cout << endl;

}

void* searchNum(int arr[], int num, int col) {

	int pozition = col + 1;

	for (int i = 0; i < col; i++)
	{
		if (num == arr[i])
		{
			pozition = i;
			break;
		}


	}

	if (pozition == col + 1)
	{
		cout << "Нет таких значений" << endl;
		return 0;
	}

	cout << "первое упоминание числа на позиции - " << pozition << endl;

	deleteArray(arr);

	return 0;
}

int* printArray(int col) {


	int* arr = new int[col];

	for (int i = 0; i < col; i++)
	{
		arr[i] = (rand() % 20) - 5;
		cout << arr[i] << ' ';
	}
	cout << endl;


	return arr;
}

void* searchNums(int arr[], int col) {

	cout << "Числа " << endl;

	for (int i = 2; i < col; i++)
	{

		if (arr[i] < arr[i - 2] - arr[i - 1])
		{

			cout << arr[i] << " ";
		}

	}
	cout << endl;

	deleteArray(arr);

	return 0;
}

void searchLongLine(int arr[], int col) {

	int Long = 1;
	int maxLong = 1;
	for (int i = 0; i < col; i++)
	{

		if (arr[i] == arr[i + 1])
		{
			Long++;
		}
		if (Long > maxLong)
		{

			maxLong = Long;
			Long = 1;

		}

	}
	cout << "MAX = " << maxLong << endl;

	deleteArray(arr);

}


void deleteMatrix(int* arr[], int row) {

	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
}

int** transponSecDiag(int* arr[], int row, int col) {

	int a;
	cout << endl;

	cout << "Транспонированная относительно побочной диагонали" << endl;

	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col - i; j++)
		{

			swap(arr[i][j], arr[row - j - 1][col - i - 1]);

		}
	}


	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{

			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	return 0;

	deleteMatrix(arr, row);



}

int** transponMainDiag(int* arr[], int row, int col) {

	int a;

	cout << "Транспонированная относительно глав диагонали" << endl;

	for (int i = 0; i < row; i++)
	{

		for (int j = i; j < col; j++)
		{
			a = arr[j][i];
			arr[j][i] = arr[i][j];
			arr[i][j] = a;
		}
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	return arr;
}

int** printMatrix(int row, int col) {
	int a;


	int** arr = new int* [row];


	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col];
	}




	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			arr[i][j] = (rand() % 20);
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;



	return arr;
}
