#include "pch.h"
#include <iostream>

int main()
{
	char ascii_message[] = "Ascii, Hello 7eRoM!";
	wchar_t unicode_message[] = L"Unicode, Hello 7eRoM!";
	int num = 6;

	printf("Address of sample ascii string: 0x%x\n", &ascii_message);
	wprintf(L"Address of sample unicode string: 0x%x\n", &unicode_message);
	printf("Address of sample integer: 0x%x\n", &num);

	printf("\npress any key to print...\n");
	getchar();

	printf("Sample ascii string: %s\n", ascii_message);
	wprintf(L"Sample unicode string: %s\n", unicode_message);
	printf("Sample integer: %d\n", num);

	printf("\npress any key to exit...\n");
	getchar();
	return 0;
}
