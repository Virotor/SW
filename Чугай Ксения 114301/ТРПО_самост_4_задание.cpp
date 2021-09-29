#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int dlinaParallelepipeda, shirinaParallelepipeda, vysotaParallelepipeda, dlinaOtverstia, shirinaOtverstia, vysotaOtverstia;
	cout << "Введите длину основания параллелепипеда: " << endl;
	cin >> dlinaParallelepipeda;
	cout << "Введите ширину основания параллелепипеда: " << endl;
	cin >> shirinaParallelepipeda;
	cout << "Введите высоту параллелепипеда: " << endl;
	cin >> vysotaParallelepipeda;
	cout << "Введите длину основания отверстия" << endl;
	cin >> dlinaOtverstia;
	cout << "Введите ширину основания отверстия: " << endl;
	cin >> shirinaOtverstia;
	cout << "Введите высоту отверстия: " << endl;
	cin >> vysotaOtverstia;
	if ((dlinaParallelepipeda < dlinaOtverstia && shirinaParallelepipeda < shirinaOtverstia && vysotaParallelepipeda < vysotaOtverstia) || (dlinaParallelepipeda < shirinaOtverstia && shirinaParallelepipeda < dlinaOtverstia && vysotaParallelepipeda < vysotaOtverstia) || (dlinaParallelepipeda < vysotaOtverstia && shirinaParallelepipeda < shirinaOtverstia && vysotaParallelepipeda < dlinaOtverstia) || (shirinaParallelepipeda < vysotaOtverstia && dlinaParallelepipeda < shirinaOtverstia && vysotaParallelepipeda < dlinaOtverstia) || (vysotaParallelepipeda < shirinaOtverstia && dlinaParallelepipeda < dlinaOtverstia && shirinaParallelepipeda < vysotaOtverstia) || (vysotaParallelepipeda < shirinaOtverstia && dlinaParallelepipeda < vysotaOtverstia && shirinaParallelepipeda < dlinaOtverstia))
	{
		cout << "Поместится" << endl;
	}
	else
	{
		cout << "Не поместится" << endl;
	}
	return 0;
}