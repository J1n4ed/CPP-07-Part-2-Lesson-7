// main.cpp

/*
  10.02.2023
  Тема 2, Занятие 7
  Работа 2, Макрос SUB
  CPP-07
  @j1n4ed
*/

#include <iostream>
#include <Windows.h>

#define SUB(x, y) (x - (y))

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// ---------------------

	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;

	// clean && exit
	std::cout << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}

int add(int a, int b)
{
	return a + b;
}