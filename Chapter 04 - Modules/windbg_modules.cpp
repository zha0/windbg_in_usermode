#include "pch.h"
#include <windows.h>
#include <iostream>
#include <libloaderapi.h>
#include "sample_dll.h"

typedef void(*my_print_func)();

int main()
{
	HINSTANCE hGetProcIDDLL;

	// First Time
	hGetProcIDDLL = LoadLibrary(L"sample_dll.dll");
	if (hGetProcIDDLL == NULL)
		std::cout << "Could not load: " << GetLastError() << std::endl;
	else
		std::cout << "it has been called for 1st time!" << std::endl;

	// Second Time
	hGetProcIDDLL = LoadLibrary(L"sample_dll.dll");
	if (hGetProcIDDLL == NULL)
		std::cout << "Could not load: " << GetLastError() << std::endl;
	else
		std::cout << "it has been called for 2nd time!" << std::endl;

	// Thrid Time
	hGetProcIDDLL = LoadLibrary(L"sample_dll.dll");
	if (hGetProcIDDLL == NULL)
		std::cout << "Could not load: " << GetLastError() << std::endl;
	else
		std::cout << "it has been called for 3rd time!" << std::endl;


	my_print_func my_print = (my_print_func)GetProcAddress(hGetProcIDDLL, "my_print");
	if (!my_print) {
		std::cout << "Could not locate the function: " << GetLastError() << std::endl;
		return EXIT_FAILURE;
	}

	my_print();

	std::cout << std::endl << "Press any key to exit.." << std::endl;
	getchar();
}
