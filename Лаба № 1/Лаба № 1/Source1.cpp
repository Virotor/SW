#include <iostream>
int main()
{
	setlocale(LC_ALL, "russian");
	int day;
	std::cout << "������� ���� (�� 1 �� 7): ";
	std::cin >> day;
	while (day < 1 || day > 7)
	{
		std::cout << "����� ������������ ����" << std::endl;
		std::cout << "������� ���� (�� 1 �� 7): ";
		std::cin >> day;
	}
	const char* day_of_week[] = { "�����������", "�������", "�����", "�������", "�������", "�������", "�����������" };
	std::cout << day_of_week[day - 1] << std::endl;
	return 0;
}