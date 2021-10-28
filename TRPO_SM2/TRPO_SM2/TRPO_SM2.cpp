#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

void indexOfSubstring(string text, string substring);
bool isNumberNumeric();
int inputNumber();
void byKeyboard(int amount, int* array);
void byRandom(int amount, int* array);
int* buildArray(int& amount);
void findSubstring();
int positionOfElement();
void showMatrix(int numbersLine, int numbersColumn, int** matrix);
int** makeMatrix(int numbersLine, int numbersColumn);
int** transpose(int** matrix, int numbersLine, int numbersColumn);
void lenghtOfRecItems();
void NumbersInArray();
void transplatationMatrix();
void findDistance();
void deleteMatrix(int**& matrix, int numbersLine);
int maxRange(int** matrix, int numOfPoints);
void printMatrix(int** matrix, int numbersLine, int numbersColumn);

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int toggle;
	while (true) {
		do {
			cout << "________________________________________________________________________________________________________________________\n" <<
				"Нажмите чтобы продолжить(1-5)\n"
				<< "-1- Вывести позицию введенного элемента + дополнительное задание\n"
				<< "-2- Вывести все числа в массиве, которые меньше разности двух предыдущих\n"
				<< "-3- Вывести максимальное количесво повторяющихся элементов массива\n"
				<< "-4- Транспонировать матрицу\n"
				<< "-5- Найти максимальное расстояние между двумя точками среди набора точек\n"
				<< "-0- выход" << endl << "Ваш выбор: ";
			toggle = inputNumber();
			if (toggle > 5 || toggle < 0)
				cout << "Вы можете использовать только 0-5! Если хотите выйти нажмите 0\n";
		} while (toggle > 5 || toggle < 0);
		cout << "\n";
		if (toggle == 0)
			return 0;
		else
		{
			switch (toggle)
			{
			case 1:
				positionOfElement();
				findSubstring();
				break;
			case 2:
				NumbersInArray();
				break;
			case 3:
				lenghtOfRecItems();
				break;
			case 4:
				transplatationMatrix();
				break;
			case 5:
				findDistance();
				break;
			default:
				cout << "Вы можете использовать только 0-5! Попробуйте снова\n";
			}
		}
	}
	system("pause");
	return 0;
}

int maxRange(int** matrix, int numOfPoints)
{
	int maxRange = 0, range;
	for (int i = 0; i < numOfPoints; i++)
	{
		for (int j = 0; j < numOfPoints; j++)
		{
			range = sqrt(abs(matrix[0][i] - matrix[0][j]) * abs(matrix[0][i] - matrix[0][j]) + abs(matrix[1][i] - matrix[1][j]) * abs(matrix[1][i] - matrix[1][j]));
			if (range > maxRange)
			{
				maxRange = range;
			}
		}
	}
	return maxRange;
}

void findDistance()
{
	int numOfPoints;
	do {
		cout << "Сколько точек вы хотите создать(2-100)? : ";
		numOfPoints = inputNumber();
	} while (numOfPoints > 100 || numOfPoints < 2);

	int numbersLine = numOfPoints;
	int numbersColumn = 2;
	int** matrix = makeMatrix(2, numOfPoints);
	makeMatrix(2, numOfPoints);
	printMatrix(matrix, 2, numOfPoints);
	cout << "Максимальная дистанция между двумя точками равна " << maxRange(matrix, numOfPoints) << endl;

	deleteMatrix(matrix, 2);
}

void deleteMatrix(int**& matrix, int numbersLine)
{
	for (int index = 0; index < numbersLine; index++)
	{
		delete[] matrix[index];
	}
	delete[] matrix;
	matrix = NULL;
}

bool isNumberNumeric()
{
	if (cin.get() == '\n')
		return true;
	else
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		return false;
	}
}

int inputNumber()
{
	int number;
	while (true)
	{
		cin >> number;
		if (isNumberNumeric())
		{
			return number;
		}
		else
		{
			cout << "Incorrect input!\n" << "Try again: ";
		}
	}
}

void byKeyboard(int amount, int* array)
{
	for (int i = 0; i < amount; ++i)
	{
		cout << "Введите элемент массива: ";
		array[i] = inputNumber();
	}
}

void byRandom(int amount, int* array)
{
	int left_value, right_value;
	cout << "Введите начало отрезка: ";
	left_value = inputNumber();
	do {
		cout << "Введите конец отрезка: ";
		right_value = inputNumber();
		if (left_value >= right_value) cout << "Конец отрезка не может быть меньше начала или равен ему!\n";
	} while (left_value >= right_value || right_value < 0);

	for (int i = 0; i < amount; ++i)
	{
		int z = rand() % 3;
		if (z == 1)
			z = -1;
		else
			z = 1;
		array[i] = (rand() % (right_value - left_value + 1) + left_value) * z ;
	}
	for (int i = 0; i < amount; ++i)
	{
		cout << array[i] << " ";
	}
	cout << "\n";
}

int* buildArray(int &amount)
{
	int code;
	do {
		cout << "Введите количество элементов массива: ";
		amount = inputNumber();
		if (amount < 1) cout << "Размер массива не может быть отрицательным или равным нулю!\n";
		if (amount > 9999) cout << "Размер массива не может быть больше 9999!\n";
	} while (amount < 1 || amount > 9999);
	int* array = new int[amount];
	do {
		cout << "Выберите способ задания массива:\n" <<
			"-1- ввод с клавиатуры\n" <<
			"-2- задание рандомными числами на выбранном отрезке\n";
		cout << "Введите код вашего выбора: ";
		code = inputNumber();
		switch (code)
		{
		case 1: byKeyboard(amount, array); break;
		case 2: byRandom(amount, array); break;
		default: cout << "Вы можете использовать только '1' и '2'\n";
		}
	} while (code < 1 || code > 2);
	return array;
}

void findSubstring()
{
	string text;
	cout << "Enter string: ";
	cin >> text;
	string substring = "Я люблю ТРПО";

	int indexOfSubstring = -1;
	for (int i = 0; i < text.length(); i++)
	{
		int j = 0;
		while (j < substring.length() && i + j < text.length() && substring[j] == text[i + j])
		{
			j++;
		}
		if (j == substring.length())
		{
			indexOfSubstring = i;
		}
	}
	if (indexOfSubstring == -1)
		cout << "Такой подстроки нет\n";
	else
		cout << "Индекс подстроки равен = " << indexOfSubstring << endl;
}

int positionOfElement()
{
	int amount;
	int* array = buildArray(amount);
	cout << "Введите число: ";
	int number = inputNumber();
	for (int i = 0; i < amount; i++)
	{
		if (array[i] == number)
		{
			cout << "Позиция первого элемента равного " << number << " равна " << i + 1<< "\n\n";
			delete[] array;
			return 0;
		}
	}
}

void showMatrix(int numbersLine, int numbersColumn, int** matrix)
{
	for (int counterLine = 0; counterLine < numbersLine; counterLine++)
	{
		for (int counterColumn = 0; counterColumn < numbersColumn; counterColumn++)
		{
			cout << setw(4) << matrix[counterLine][counterColumn];
		}
		cout << "\n";
	}
}

int** makeMatrix(int numbersLine, int numbersColumn)
{
	int** matrix = new int* [numbersLine];
	for (int i = 0; i < numbersLine; i++)
	{
		matrix[i] = new int[numbersColumn];
		for (int j = 0; j < numbersColumn; j++)
		{
			matrix[i][j] = rand() % 20 - 10;
		}
	}
	return matrix;
}

int** transpose(int** matrix, int numbersLine, int numbersColumn)
{
	int** result_matrix = makeMatrix(numbersColumn, numbersLine);
	for (int i = 0; i < numbersLine; i++)
	{
		for (int j = 0; j < numbersColumn; j++)
		{
			result_matrix[j][i] = matrix[i][j];
		}
	}

	return result_matrix;
}

int** secondTranspose(int** matrix, int numbersLine, int numbersColumn)
{
	int** result_matrix = makeMatrix(numbersColumn, numbersLine);
	for (int i = 0; i < numbersLine; i++)
	{
		for (int j = 0; j < numbersColumn; j++)
		{
			result_matrix[numbersColumn - j - 1][i] = matrix[numbersLine - i - 1][j];
		}
	}

	return result_matrix;
}

void printMatrix(int** matrix, int numbersLine, int numbersColumn)
{
	for (int i = 0; i < numbersLine; i++)
	{
		for (int j = 0; j < numbersColumn; j++)
		{
			cout << setw(4) << matrix[i][j];
		}
		cout << "\n";
	}
	cout << endl;
}

void transplatationMatrix()
{
	int code;
	int numbersLine, numbersColumn;
	do {
		cout << "Enter the number of items per line(1-25): ";
		numbersLine = inputNumber();
	} while (numbersLine > 25 || numbersLine < 1);
	do {
		cout << "Enter the number of items in the column(1-25): ";
		numbersColumn = inputNumber();
	} while (numbersColumn > 25 || numbersColumn < 1);

	int** matrix = new int* [numbersLine];
	for (int i = 0; i < numbersLine; i++)
	{
		matrix[i] = new int[numbersColumn];
	}

	cout << "\nВыберите способ задания матрицы: ";
	do {
		cout << "\n-1- By keyboard\n-2- By random\nYour choise: ";
		cin >> code;
	} while (code > 2 || code < 1);
	switch (code)
	{
	case 1: for (int counterLine = 0; counterLine < numbersLine; counterLine++)
	{
		for (int counterColumn = 0; counterColumn < numbersColumn; counterColumn++)
		{
			cout << "Enter item [" << counterLine + 1 << "][" << counterColumn + 1 << "]: ";
			cin >> matrix[counterLine][counterColumn];
		}
	} break;
	case 2: int left_value, right_value;
		cout << "Enter the start of the line segment: ";
		cin >> left_value;

		do {
			cout << "Enter the end of the line segment: ";
			cin >> right_value;
			if (right_value <= left_value) cout << "The left value must be less than the right one!" << endl;
		} while (right_value <= left_value);

		for (int counterLine = 0; counterLine < numbersLine; counterLine++)
		{
			for (int counterColumn = 0; counterColumn < numbersColumn; counterColumn++)
			{
				int znak = rand() % 3;
				int sign;
				if (znak == 1)
					sign = -1;
				else
					sign = 1;
				matrix[counterLine][counterColumn] = (rand() % (right_value - left_value + 1) + left_value) * sign;
			}
		} break;
	default: cout << "Вы можете использовать только 1 и 2"; break;
	}
	showMatrix(numbersLine, numbersColumn, matrix);

	int** resultMatrix = transpose(matrix, numbersLine, numbersColumn);
	cout << "Транспонированная матрица относительно главной диагонали:\n";
	printMatrix(resultMatrix, numbersColumn, numbersLine);
	int** secondResultMatrix = secondTranspose(matrix, numbersLine, numbersColumn);
	cout << "Транспонированная матрица относительно побочной диагонали:\n";
	printMatrix(secondResultMatrix, numbersColumn, numbersLine);
	
	deleteMatrix(secondResultMatrix,numbersLine);
	deleteMatrix(resultMatrix, numbersLine);
	deleteMatrix(matrix, numbersLine);
}

void NumbersInArray()
{
	int amount;
	int* array = buildArray(amount);
	cout << "Элементы: ";
	int k = 0;
	for (int i = 2; i < amount; i++)
	{
		if (array[i] < array[i - 2] - array[i - 1])
		{
			cout << array[i] << " ";
			k++;
		}
	}
	cout << endl;
	if (k == 0)
		cout << "таких элементов нет\n";
	delete[] array;
}

void lenghtOfRecItems()
{
	int amount, recurringCounter = 0, maxCount = 0;
	int* array = buildArray(amount);

	for (int i = 0; i < amount - 1; i++)
	{
		if (array[i] == array[i + 1])
		{
			recurringCounter++;
			if (recurringCounter > maxCount)
			{
				maxCount = recurringCounter;
			}
		}
		else
		{
			recurringCounter = 1;
		}
	}
	cout << "Длина наибольшей последовательности одинаковых чисел, идущих подряд равна " << maxCount << "\n";
	delete[] array;
}