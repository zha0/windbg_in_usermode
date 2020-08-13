#include "pch.h"
#include <iostream>

int sum(int a, int b)
{
	return a + b;
}

int mul(int a, int b)
{
	return a * b;
}

void my_print(std::string name)
{
	std::cout << "Hello " << name.c_str() << "!" << std::endl;
}

int main(int argc, char** argv)
{
	my_print("7erom");
	std::cout << "3 + 4 = " << sum(3, 4) << std::endl;
	std::cout << "3 * 4 = " << mul(3, 4) << std::endl;

	std::cout << "Press any key to exit... " << std::endl;
	getchar();
}