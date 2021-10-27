#include <iostream>
#include <string>


using namespace std;




void deleteArray(int arr[]);

void searchSubStringOfString(string mass, string searchMass);

void* searchNum(int arr[], int num, int col);

int* printArray(int col);


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