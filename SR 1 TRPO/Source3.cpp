//#include <iostream>
//#include<cmath>
//#include<string>
//
//using namespace std;
//
//int main() {
//double side1, side2, side3, longPar, highPar, widthPar, minOtv, maxOtv, minPar, maxPar;
//cout << "Введите длинну стороны отверстия" << endl;
//cin >> side1;
//side1 = fabs(side1);
//cout << "Введите длинну второй стороны отверстия" << endl;
//cin >> side2;
//side2 = fabs(side2);
//cout << "Введите глубину отверстия" << endl;
//cin >> side3;
//side3 = fabs(side3);
//cout << "Введите длину" << endl;
//cin >> longPar;
//longPar = fabs(longPar);
//cout << "Высоту" << endl;
//cin >> highPar;
//highPar = fabs(highPar);
//cout << "Ширину" << endl;
//cin >> widthPar;
//widthPar = fabs(widthPar);
//if (!cin)
//{
//	cout << "error" << endl;
//	return 10;
//}
//
//	if (side1 < side2)
//	{
//		minOtv = side1;
//		maxOtv = side2;
//	}
//	else
//	{
//		minOtv = side2;
//		maxOtv = side1;
//	}
//
//
//			if (longPar < highPar)
//			{
//				minPar = longPar;
//				maxPar = highPar;
//			}
//			else
//			{
//				minPar = highPar;
//				maxPar = longPar;
//			}
//
//			if (minOtv >= minPar && maxOtv >= maxPar)
//			{
//				if (side3 >= widthPar)
//				{
//					cout << "Проходит" << endl;
//					return 0;
//				}
//			}
//				if (longPar < widthPar)
//				{
//					minPar = longPar;
//					maxPar = widthPar;
//				}
//				else
//				{
//					minPar = widthPar;
//					maxPar = longPar;
//				}
//				if (minOtv >= minPar && maxOtv >= maxPar)
//				{
//					if (side3 >= highPar)
//					{
//						cout << "Проходит" << endl;
//						return 0;
//					}
//				}
//
//					if (highPar < widthPar)
//					{
//						minPar = highPar;
//						maxPar = widthPar;
//					}
//					else
//					{
//						minPar = widthPar;
//						maxPar = highPar;
//					}
//
//					if (minOtv >= minPar && maxOtv >= maxPar)
//					{
//						if (side3 >= longPar)
//						{
//							cout << "Проходит" << endl;
//							return 0;
//						}
//					}
//
//
//else
//{
//	cout << "Не проходит" << endl;
//	return 1;
//}
//
//}