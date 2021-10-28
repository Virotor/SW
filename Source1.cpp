#include <iostream>
#include <locale>
#include <conio.h>
#include <cstdlib>
@@ - 10, 6 + 10, 7 @@ int find_element();
int search_for_an_element_smaller_then_the_difference_of_the_previous_two();
int max_lenght_of_repeating_elements();
int transposition();
int max_distance();

int main(){
	@@ - 38, 6 + 39, 10 @@ int main()
		transposition();
	cout << endl;
	break;
		case 5:
			max_distance();
			cout << endl;
			break;
		default:
			cout << "Такого задания нет" << endl;
			break;
}
	} while (n != 0);
	return 0;
}
int* entering_filling_oneDimensional_array(int& size_of_array){
	cout << "Введите размер массива: ";
	cin >> size_of_array;
	int* arr = new int[size_of_array];
	srand(time(0));
	cout << "Массив :" << endl;
	for (int i = 0; i < size_of_array; i++){
		arr[i] = rand() % 5 + (-2);
		cout << "[" << i + 1 << "]= " << arr[i] << endl;
	}
	return arr;
}
int find_element(){
	int size_of_array;
	int* arr = entering_filling_oneDimensional_array(size_of_array);
	cout << "Введите число: " << endl;
	int k;
	cin >> k;
	for (int i = 0; i <= size_of_array; i++){
		if (arr[i] == k){
			cout << "Ваше число находится под индеском : [" << i << "]\n"; break;
		}
		if (i == size_of_array)
			cout << "Такого числа в последовательности нет" << endl;
	}
	return 0;
}
int search_for_an_element_smaller_then_the_difference_of_the_previous_two(){
	int size_of_array;
	int* arr = entering_filling_oneDimensional_array(size_of_array);
	for (int i = 3; i < size_of_array - 2; i++){
		if (arr[i] < (arr[i - 2] - arr[i - 1])){
			cout << "Число соответсвующее условию:  " << "[" << i + 1 << "]";
			cout << arr[i] << "\n";
		}
	}
	return 0;
}
int max_lenght_of_repeating_elements(){
	int size_of_array;
	int* arr = entering_filling_oneDimensional_array(size_of_array);
	int i = 0, k = 0, max_value = 0, number_of_order, t;
	while (i < size_of_array){
		int p = 0;
		t = arr[i];
		while (arr[i] == t && i < size_of_array){
			p++;
			i++;
		}
		if (p >= max_value)
			if (p > max_value) {
				max_value = p;
				number_of_order = t;
			}
			else  k = p;
	}
	if (max_value != k)
		cout << "Количество чисел в наиболее длинной последовательности, состоящей из " << number_of_order << ": " << max_value;
	else
		cout << "Найдено несколько максимальных последовательностей длиной " << max_value;
	cout << endl;
	return 0;
}
int** entering_filling_twoDimensional_array(int& nomber_of_rows, int& nomber_of_columns){
	srand(time(NULL));
	cout << "Введите количество строк матрицы ";
	cin >> nomber_of_rows;
	cout << "Ведите количество столбцов матрицы ";
	cin >> nomber_of_columns;
	int** arr = new int* [nomber_of_rows];
	for (int i = 0; i < nomber_of_rows; i++)
		arr[i] = new int[nomber_of_columns];
	for (int i = 0; i < nomber_of_rows; i++){
		for (int j = 0; j < nomber_of_columns; j++){
			arr[i][j] = rand() % 200 - 100;
			cout << arr[i][j] << "\t ";
		}
		cout << endl;
	}
	return arr;
}
int transposition(){
	int nomber_of_columns;
	int nomber_of_rows;
	int** arr = entering_filling_twoDimensional_array(nomber_of_rows, nomber_of_columns);
	int** arrT = new int* [nomber_of_columns];
	*arrT = new int[nomber_of_columns * nomber_of_rows];
	for (int i = 1; i < nomber_of_columns; ++i)
		arrT[i] = arrT[i - 1] + nomber_of_rows;
	cout << endl;
	for (int i = 0; i < nomber_of_rows; ++i){
		for (int j = 0; j < nomber_of_columns; ++j)
		{
			arrT[j][i] = arr[i][j];
		}
	}
	cout << "Транспонированная матрица по главной диагонали" << endl;
	for (int i = 0; i < nomber_of_rows; ++i){
		for (int j = 0; j < nomber_of_columns; ++j){
			cout << arrT[i][j] << "\t ";
		}
		cout << endl;
	}
	cout << "Транспонированная матрица по побочной диагонали" << endl;
	for (int i = 0; i < nomber_of_columns; i++){
		for (int j = 0; j < nomber_of_rows; j++)
		{
			cout << arr[nomber_of_rows - 1 - j][nomber_of_columns - 1 - i] << "\t";
		}
		cout << endl;
	}

	return 0;
}
int max_distance(){
	double distance;
	double max_distance = 0;
	int dots;
	cout << "Введите количество точек ";
	cin >> dots;

	int* coordinatesX = new int[dots];
	int* coordinatesY = new int[dots];

	for (int i = 0; i < dots; i++){
		coordinatesX[i] = rand() % 21 - 10;
		coordinatesY[i] = rand() % 21 - 10;
	}
	for (int i = 0; i < dots; i++){
		cout << "(" << coordinatesX[i] << "," << coordinatesY[i] << ")" << endl;

	}

	for (int i = 0; i < dots; i++){
		for (int k = 0; k < dots - 1; k++){
			distance = sqrt((coordinatesX[i] - coordinatesX[k]) * (coordinatesX[i] - coordinatesX[k]) + (coordinatesY[i] - coordinatesY[k]) * (coordinatesY[i] - coordinatesY[k]));
			if (distance > max_distance){
				max_distance = distance;
			}
		}
	}
	cout << "Максимальное расстояние = " << max_distance << endl;
	return 0;
}