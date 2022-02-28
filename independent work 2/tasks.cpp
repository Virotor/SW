#include <iostream> 

using namespace std;


int* create_array(int size) {
	int* arr = new int[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 3 + 1;
		cout << arr[i] << " ";
	}
	return arr;
}

void FirstTask(){
	int size, num;

	cout << "Enter size of array ";
	cin >> size;
	int* arr = create_array(size);
	cout << "Enter element ";
	cin >> num;
	for (int i = 0; i < size; i++) {
		if (arr[i] == num) {
			cout << "Index: " << i << endl;
			break;
		}
	}
	delete[] arr;
}

void SecondTask() {
	int size, z=0;
	cout << "Enter size of array ";
	cin >> size;
	int* arr = create_array(size);
	cout << "answer: ";
	for (int i = 2; i < size; i++) {
		if (arr[i] < (arr[i - 2] - arr[i - 1])) cout << arr[i] << " ";
		else z++;
	}
	if (z == size - 2){
        cout << "There are no such elements";
    } 
	delete[] arr;
}

void ThirdTask(){
	int size, max_length = 1, current_length = 1;
	cout << "Enter size of array ";
	cin >> size;
	int* arr = create_array(size);
	for (int i = 1; i < size; i++) {
		if (arr[i] == arr[i - 1] and arr[i] == arr[i + 1]){
            current_length++;
        }
		else if (arr[i] == arr[i - 1] and arr[i] != arr[i + 1]) {
			current_length++;
			if (current_length > max_length) {
				max_length = current_length;
			}
			current_length = 1;
		}
	}
	cout << "max length: " << max_length;
	delete[] arr;
}

void FourthTask(){
    srand(time(0));
    int col, line;
    cout << "lines = ";
    cin >> line;
    cout << "columns = ";
    cin >> col;
    cout << "Matrix";
    int** matrix = new int* [line];
    for (int i=0;i<line;i++)
    {
        matrix[i] = new int[col];
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = rand() % 21 - 10;
        }
    }
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] >= 0) cout << " ";
            cout << matrix[i][j] << "  ";
        }
        cout << endl << endl;
    }
    cout << "main matrix" << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < line; j++)
        {
            if (matrix[j][i] >= 0) cout << " ";
            cout << matrix[j][i] << "  ";
        }
        cout << endl<<endl;
    }
    cout << "side matrix" << endl;
    for (int i = col-1; i >-1; i--)
    {
        for (int j = line - 1; j > -1; j--)
        {
            if (matrix[j][i] >= 0) cout << " ";
            cout << matrix[j][i] << "  ";
        }
        cout << endl << endl;
    }
    for (int i = 0; i < line;i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
	int f;

	cout << "Which task do you want to test? (1, 2, 3, 4)" << endl;
	cin >> f;
	switch (f){
		case 1: FirstTask();
            break;
		case 2: SecondTask();
            break;
		case 3: ThirdTask();
            break;
		case 4: FourthTask();
            break;
		default: cout << "python is better then c++";
		}

	return 0;
}