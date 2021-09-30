#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int dl_p, sh_p,visot, dl_otv, sh_otv, vis_otv, v_p;
	cout << "Введите длину основания параллелепипеда: ";cin >> dl_p;
	cout << "Введите ширину основания параллелепипеда:";cin >> sh_p;
	cout << "Введите высоту параллелепипеда: "; cin >> visot;
	cout << "Введите длину отверстия";cin >> dl_otv;
	cout << "Введите ширину отверстия: "; cin >> sh_otv;
	if ((dl_p < dl_otv && sh_p < sh_otv) || (dl_p < sh_otv && sh_p < dl_otv ) || ( sh_p < sh_otv && visot < dl_otv) || (dl_p < sh_otv && visot < dl_otv) || (vis_p < sh_otv && dl_p < dl_otv ) || (vis_p < sh_otv && sh_p < dl_otv))
	{
		cout << "Пройдет" << endl;
	}
	else
	{
		cout << "Не пройдет" << endl;
	}
	return 0;

}