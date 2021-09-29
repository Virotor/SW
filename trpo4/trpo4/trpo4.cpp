#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int dlinaOtverstija, shirinaOtverstija, visotaPar, shirinaPar, dlinaPar, glubinaOtverstija;
	cout << "Введите длину отверстия : "; cin >> dlinaOtverstija;
	cout << "Введите ширину отверстия : "; cin >> shirinaOtverstija;
	cout << "Введите глубину отверстия : "; cin >> glubinaOtverstija;
	cout << "Введите высоту параллелепипеда : "; cin >> visotaPar;
	cout << "Введите ширину параллелепипеда : "; cin >> shirinaPar;
	cout << "Введите длину параллелепипеда : "; cin >> dlinaPar;
	if (((glubinaOtverstija >= shirinaPar) and (dlinaPar <= dlinaOtverstija) and (shirinaOtverstija >= visotaPar)) || ((glubinaOtverstija >= shirinaPar) and (dlinaPar <= shirinaOtverstija) and (visotaPar <=dlinaOtverstija))
		|| ((glubinaOtverstija >= dlinaPar) and (visotaPar <= dlinaOtverstija) and (shirinaOtverstija >= shirinaPar)) || ((glubinaOtverstija >= dlinaPar) and (shirinaPar <= dlinaOtverstija) and (shirinaOtverstija >= visotaPar))
		|| ((glubinaOtverstija >= visotaPar) and (shirinaPar <= dlinaOtverstija) and (shirinaOtverstija >= dlinaPar)) || ((glubinaOtverstija >= visotaPar) and (dlinaPar <= dlinaOtverstija) and (shirinaOtverstija >= shirinaPar)))
	{
		cout << "Поместится."; 
	}
	else cout << "Не поместится.";
	

}