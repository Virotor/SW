//#include <iostream>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//int main() {
//
//	double firstNum;
//	int  secNum;
//	cout << "Введите первое число" << endl;
//	cin >> firstNum;//n
//
//
//	int i = 1;
//	for (; ; i++)
//	{
//		if (firstNum < 10)
//		{
//			break;
//		}
//		firstNum /= 10;
//	}
//	cout << "Введите второе число" << endl;
//	cin >> secNum;//k
//	if (secNum > i)
//	{
//		cout << "В первом числе нет столько символов" << endl;
//		return 2;
//	}
//	if (secNum == 0)
//	{
//		cout << "Вы ничего не вывели!" << endl;
//		return 2;
//	}
//	firstNum *= pow(10, secNum - 1);
//	cout << int(firstNum) << endl;
//}