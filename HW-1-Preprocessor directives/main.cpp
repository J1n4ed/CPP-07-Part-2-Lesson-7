// main.cpp

/*
  10.02.2023
  ���� 2, ������� 7
  ������ 1, ��������������� ���������
  CPP-07
  @j1n4ed
*/

#include <iostream>
#include <Windows.h>

#define MODE 1

#ifndef MODE

#error "MODE IS NOT DEFINED! DEFINE MODE"

#endif

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// ---------------------

	if (!MODE)
	{
		std::cout << "������� � ������ ����������";
	}
	else if (MODE == 1)
	{
		std::cout << "������� � ������ ������";

		int x = 0, y = 0;

		int add(int, int);

		std::cout << "\n������� ����� 1: ";
		std::cin >> x;
		std::cout << "������� ����� 2: ";
		std::cin >> y;
		std::cout << "��������� ��������: " << add(x, y);
	}
	else
	{
		std::cout << "����������� �����. ���������� ������";
	}
	

	// clean && exit
	std::cout << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}

int add(int a, int b)
{
	return a + b;
}