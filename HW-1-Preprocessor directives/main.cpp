// main.cpp

/*
  10.02.2023
  Тема 2, Занятие 7
  Работа 1, Препроцессорные директивы
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
		std::cout << "Работаю в режиме тренировки";
	}
	else if (MODE == 1)
	{
		std::cout << "Работаю в боевом режиме";

		int x = 0, y = 0;

		int add(int, int);

		std::cout << "\nВведите число 1: ";
		std::cin >> x;
		std::cout << "Введите число 2: ";
		std::cin >> y;
		std::cout << "Результат сложения: " << add(x, y);
	}
	else
	{
		std::cout << "Неизвестный режим. Завершение работы";
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