#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int dl_p, sh_p, vis_p, dl_otv, sh_otv, vis_otv, v_p;
	cout << "Введите длину основания параллелепипеда: " << endl;
	cin >> dl_p;
	cout << "Введите ширину основания параллелепипеда: " << endl;
	cin >> sh_p;
	cout << "Введите высоту параллелепипеда: " << endl;
	cin >> vis_p;
	cout << "Введите длину отверстия" << endl;
	cin >> dl_otv;
	cout << "Введите ширину отверстия: " << endl;
	cin >> sh_otv;
	if ((dl_p < dl_otv && sh_p < sh_otv) || (dl_p < sh_otv && sh_p < dl_otv) || (sh_p < sh_otv && vis_p < dl_otv) || (dl_p < sh_otv && vis_p < dl_otv) || (vis_p < sh_otv && dl_p < dl_otv) || (vis_p < sh_otv && sh_p < dl_otv))
	{
		cout << "Поместится" << endl;
	}
	else
	{
		cout << "Не поместится" << endl;
	}
	return 0;

}