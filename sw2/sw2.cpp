#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
	void fillMassive(vector <int> &);
	void fillMatr(vector <vector <int>> &, int, int);
	void out_Matr(vector <vector <int>>, int, int);
	void out_mass(vector <int> &);
	int sq(int, int, int, int);

	vector <int> a;
	vector < vector <int> > mat, newMatr;
	vector < vector <int> > cord;
	int choice, len, row, col, max_row = 0, z = 0;
	cout << "Choose a task 1-5 : \n";
	cin >> choice;

	switch (choice)
	{

	default:
	case 1:
		cout << "Vvedite dlinu massiva :\n";

		cin >> len;
		a.resize(len);
		fillMassive(a);
		out_mass(a);
		cout << "\nWhat number do you want to find pos : \n";
		int buff;
		cin >> buff;
		for (int i = 0; i < a.size(); i++)
		{
			if (a.at(i) == buff)
			{
				cout << "Position : " << i;
				i = a.size();
			}
		}
		break;
	case 2:
		cout << "Vvedite dlinu massiva :\n";

		cin >> len;
		a.resize(len);
		fillMassive(a);
		out_mass(a);
		cout << "\n\nNumbers : ";
		for (int i = 0; i < a.size() - 2; i++)
		{
			if (a.at(i + 2) < a.at(i) - a.at(i + 1))
			{
				cout << a.at(i + 2) << " ";
			}
		}
		break;
	case 3:
		cout << "Vvedite dlinu massiva :\n";
		cin >> len;
		a.resize(len);
		fillMassive(a);
		out_mass(a);


		for (int i = 0; i < len - 1; i++)
		{
			z++;
			if (a.at(i) != a.at(i + 1))
			{
				if (max_row < z)
					max_row = z;
				z = 0;
			}
		}
		cout << "\nMax row lenth : " << max_row;
		break;
	case 4:
		cout << "Input vector row and col : \n";
		cin >> row >> col;
		mat.assign(row, vector <int>(col));
		fillMatr(mat, row, col);
		out_Matr(mat, row, col);
		newMatr.assign(col, vector <int>(row));
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
			{
				newMatr[j][i] = mat[i][j];
			}
		cout << "Main diagonal : \n";
		out_Matr(newMatr, col, row);
		newMatr.clear();
		newMatr.assign(row, vector <int>(col));
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
			{
				newMatr[i][j] = mat[i][mat[0].size() - 1 - j];
			}
		cout << "secondary diagonal : \n";
		mat.clear();
		mat.assign(col, vector <int>(row));
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
			{
				mat[j][i] = newMatr[i][j];
			}
		out_Matr(mat, col, row);
		break;
	case 5:
		int toch;
		int max_hyp = 0, hyp;
		cout << "Vvedite colichestvo tochek : \n";
		cin >> toch;
		cout << "\nVvedite x,y : \n";
		cord.assign(toch, vector <int>(2));
		for (int i = 0; i < toch; i++)
			for (int j = 0; j < 2; j++)
				cin >> cord[i][j];
		for (int l = 0; l < toch; l++)
			for (int i = 0; i < toch - 1; i++)
			{
				hyp = sq(cord[l][0], cord[i + 1][0], cord[l][1], cord[i + 1][1]);
				if (max_hyp < hyp)
					max_hyp = hyp;
			}
		int lnt = sqrt(max_hyp);
		cout << "\nMax lenth : " << lnt;
		break;
	}
	return 0;
}



void fillMassive(vector <int>& a)
{
	int cho;
	cout << "Manually or randomly? (1/2) :\n";
	cin >> cho;
	switch (cho)
			default:
			case 1:
			{
				for (int i = 0; i < a.size(); i++)
				{
					cout << i + 1 << " number : ";
					cin >> a.at(i);
					cout << "\n";
				}
				break;
			case 2:
				for (int i = 0; i < a.size(); i++)
				{
					a.at(i) = rand() % 10 + 1;
				}

			}
}

void fillMatr(vector <vector <int>>& matr, int row, int col)
{
	int cho;
	cout << "Manually or randomly? (1/2) :\n";
	cin >> cho;
	switch (cho)
			default:
			case 1:
			{
				for (int i = 0; i < row; i++)
					for (int j = 0; j < col; j++)
					{
						cout << i + 1 << " number : ";
						cin >> matr[i][j];
						cout << "\n";
					}
				break;
			case 2:
				for (int i = 0; i < row; i++)
					for (int j = 0; j < col; j++)
					{
						matr[i][j] = rand() % 10 + 1;
					}

			}

}


void out_mass(vector <int>& a)
{
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
}
void out_Matr(vector <vector <int>> matr, int row, int col)
{
	cout << "\nMatrix : \n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			cout << setw(3) << matr[i][j] << " ";
		}
		cout << "\n";
	}

}
int sq(int x1, int x2, int y1, int y2)
{
	int ans = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	return ans;
}