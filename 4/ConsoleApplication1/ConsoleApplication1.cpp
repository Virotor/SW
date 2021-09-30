#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int dl_paralelipipeda, sh_paralelipipeda, vis_paralelipipeda, dl_otverstia, sh_otverstia, vis_otverstia, v_p;
	cout << "Введите длину основания параллелепипеда: " << endl;
	cin >> dl_paralelipipeda;
	cout << "Введите ширину основания параллелепипеда: " << endl;
	cin >> sh_paralelipipeda;
	cout << "Введите высоту параллелепипеда: " << endl;
	cin >> vis_paralelipipeda;
	cout << "Введите длину отверстия" << endl;
	cin >> dl_otverstia;
	cout << "Введите ширину отверстия: " << endl;
	cin >> sh_otverstia;
	if ((dl_paralelipipeda < dl_otverstia && sh_paralelipipeda < sh_otverstia) || (dl_paralelipipeda < sh_otverstia && sh_paralelipipeda < dl_otverstia) || (sh_paralelipipeda < sh_otverstia && vis_paralelipipeda < dl_otverstia) || (dl_paralelipipeda < sh_otverstia && vis_paralelipipeda < dl_otverstia) || (vis_paralelipipeda < sh_otverstia && dl_paralelipipeda < dl_otverstia) || (vis_paralelipipeda < sh_otverstia && sh_paralelipipeda < dl_otverstia))
	{
		cout << "Поместится" << endl;
	}
	else
	{
		cout << "Не поместится" << endl;
	}
	return 0;

}