#include<iostream>
#include<math.h>
#include<string>
#include<conio.h>
using namespace std;
int main() {
			setlocale(LC_ALL, "rus");
			do {
				
				cout << "*************Задание 1*******************" << endl;
				int i;
				string string1;

				cout << "Введите число" << endl;
				getline(cin, string1);
				int length;
				length = string1.length();
				for (i = 0; i < length; i++)
				{
					cout << string1[i] << endl;
				}
				cout << "Введите 1, чтобы повторить текущее задание еще раз. \n Либо нажмите любую клавишу,чтобы перейти к следующему заданию" << endl;
				_getch();
				system("cls");
			} while (_getch()=='1');
			
/////////////////////////////////////////////
			cout << "*************Задание 2*******************" << endl;
			do {
				int day_number;
			cout << "Введите номер дня недели" << endl;
			cin >> day_number;
			if (day_number > 7 || day_number < 1)
				cout << "Номер дня введен неверно" << endl;
			else switch (day_number)
			{
			case 1: {
				cout << "Понедельник" << endl;
				break; }
			case 2: {
				cout << "Вторник" << endl;
				break; }
			case 3: {
				cout << "Среда" << endl;
				break; }
			case 4: {
				cout << "Четверг" << endl;
				break; }
			case 5: {
				cout << "Пятница" << endl;
				break; }
			case 6: {
				cout << "Суббота" << endl;
				break; }
			case 7: {
				cout << "Воскресенье" << endl;
				break; }
			}
			cout << "Введите 1, чтобы повторить текущее задание еще раз. \n Либо нажмите любую клавишу,чтобы перейти к следующему заданию" << endl;
			_getch();
			system("cls");
			} while (_getch() == '1');
		

	 //////////////////////////////////////////////////////////
			cout << "*************Задание 3*******************" << endl;
			do {
			
			long long int k,i,j,stepen,n, NikitaDuko;
			
		
			cout << "Введите k и n" << endl;
		
			cin >> k>>n;
	
			
			for( i=0;;++i)
			{
				NikitaDuko = n / pow(10, i);//NikitaDuko-вспомогательная переменная
				if (NikitaDuko == 0) {

					break;
				}


			}
			stepen = i-k;
	
			int conch;//conch - конечное число
			if (stepen < 0)
				cout << "Цифр в числе меньше, чем значение k" << endl;
			else {
				conch = n / pow(10, stepen);
				cout << conch << endl;
			}
			cout << "Введите 1, чтобы повторить текущее задание еще раз. \n Либо нажмите любую клавишу,чтобы перейти к следующему заданию" << endl;
			_getch();
			system("cls");
} 
			while (_getch() == '1');
	
	 //////////////////////////////////////////////////////
cout << "*************Задание 4*******************" << endl;
do {
	int weight1, long1, hight1, weight2, long2;
	cout << "Введите длину, ширину и высоту параллелепипида" << endl;
	cin >> long1 >> weight1 >> hight1;
	cout << "Введите длину и ширину отверстия " << endl;
	cin >> long2 >> weight2;
	int min1, medium1, min2, max2;//нахожу самую малеьнкую и среднюю стороны параллелепида, а также самую маленькую и самую большую сторону прямоугольника
	if (long1 <= weight1 && long1 <= hight1) {
		min1 = long1;
		if (weight1 <= hight1)
		{
			medium1 = weight1;
		}
		else{
			medium1 = hight1;
			}
	}
	else if (weight1 <= long1 && weight1 <= hight1) {
		min1 = weight1;
		if (long1 <= hight1)
		{
			medium1 = long1;
		}
		else {
			medium1 = hight1;
		}
	}
	else { min1 = hight1; 
		if (long1 <= weight1)
		{
		medium1 = long1;
		}
		else {
		medium1 = weight1;
		}
	}///
	if (long2 <= weight2) {
		min2 = long2;
		max2 = weight2;
	}
	else {
		max2 = long2;
		min2 = weight2;
	}
	if (min1 <= min2 && medium1 <= max2)

		cout<<"Пройдет" << endl;
	else
		cout << "Не пройдет" << endl;


	cout << "Введите 1, чтобы повторить текущее задание еще раз. \n Либо нажмите любую клавишу,чтобы перейти к следующему заданию" << endl;
	_getch();
	system("cls");
}   while (_getch() == '1');
	
	/// /////////////////////////////
cout << "*************Задание 5*******************" << endl;
do {
	char random0, random1, random2, random3;
	
	srand(time(NULL));
	cout << "Сгенерированный пароль:" << endl;
		random0 = rand()%10+48;
		random1 = rand() % 10 + 48;
		random2 = rand() % 10 + 48;
		random3 = rand() % 10 + 48;
		cout << random0 << random1 << random2 << random3;
	
	cout << endl;
	char f,v,b,n;// переменные с которой будут сравниваться символы кода. я уже потом понял, что мог их назвать нормально и пронумеровать
	for (f = 48; f < 58; f++)
	{
		
		for (v = 48; v < 58; v++)
		{
			
			for (b = 48; b < 58; b++)
			{
				
				for (n = 48; n < 58; n++)
				{
					if (random3 == n)
						break;

				}
				if (random2 == b)
					break;
			}
			if (random1 == v)
				break;

		}
		if (random0 == f)
			break;

	}
	cout << "Пароль подобран:" << endl;
	cout <<f<<v<<b<<n<< endl;
	cout << "Введите 1, чтобы повторить текущее задание еще раз. \n Либо нажмите любую клавишу,чтобы перейти к следующему заданию" << endl;
	_getch();
	system("cls");
} while (_getch() == '1');

	return 0;
}