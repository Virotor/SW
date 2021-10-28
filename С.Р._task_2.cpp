#include <iostream>//содержит задания 1, 2, 3
using namespace std;
void inputArr(int*  arr, int size)
{
	for (int i = 0; i < size; i++) 
	{
		arr[i] = rand() % 20 - 10;
	}
}
void printArr(int* arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << " " << arr[i];
	}
}
void positNum(int* arr, int size, int num)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == num) 
		{
			cout << i;
			i = size;
		}
	}
}
void searchDifference(int* arr, int size)
{
	for (int i = 2; i < size; i++)
	{
		if (arr[i] < (arr[i-1]- arr[i-2]))
		{
			cout << arr[i]<<" for position "<<i<<endl;
			
		}
	}
}
int searchL(int* arr, int size)
{
	int number = 1;
	int count = 1;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == arr[i + 1]) count += 1;
		else {
			if (count > number) {
				number = count;
				count = 1;
			}
		}
	}
	return number;
}
int main()
{
	int num, lenght, size;
	cout << "input array size " << endl;
	cin >> size;
	int* arr = new int[size];
		inputArr(arr, size);
		printArr(arr, size);
		cout << "\ninput your number"<<endl;
		cin >> num;
		cout << "\nThe position of your number is ";
		positNum(arr, size, num);
		cout << "\nall numbers in the array that are less than the difference between the two previous ones:\n";
		searchDifference(arr, size);
		cout << "\nMax lenght is ";
		lenght = searchL(arr, size);
		cout << lenght;
		delete[]arr;
}



