//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	srand(time(NULL));
//	char firstNum, secNum, triNum, fourNum;
//
//	firstNum = (rand() % 10) + 48;
//	secNum = (rand() % 10) + 48;
//	triNum = (rand() % 10) + 48;
//	fourNum = (rand() % 10) + 48;
//	
//	int c = 0;
//	int i;
//	int j;
//	int p;
//	int q;
//
//	cout << "Заданный пароль- " << firstNum << secNum << triNum << fourNum << endl;
//
//
//	for (i = 48; i < 58; i++)
//	{
//
//		for (j = 48; j < 58; j++)
//		{
//
//			for (p = 48; p < 58; p++)
//			{
//
//				for (q = 48; q < 58; q++)
//				{
//
//					if (i == int(firstNum) && j == int(secNum) && p == int(triNum) && q == int(fourNum))
//					{
//						c++;
//						break;
//					}
//				}
//				if (c == 1)
//				{
//					break;
//				}
//			}
//			if (c == 1)
//			{
//				break;
//			}
//		}
//		if (c == 1)
//		{
//			break;
//		}
//	}
//	cout << "Отгаданный пароль - " << char(i) << char(j) << char(p) << char(q) << endl;
//	cout << endl;
//}
//
