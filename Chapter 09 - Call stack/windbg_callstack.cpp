#include "pch.h"
#include <Windows.h>
#include <iostream>

int main(int argc, char* argv[])
{
	HANDLE hFile = CreateFile(L"a.txt",                // name of the write
		GENERIC_WRITE,          // open for writing
		0,                      // do not share
		NULL,                   // default security
		CREATE_NEW,             // create new file only
		FILE_ATTRIBUTE_NORMAL,  // normal file
		NULL);                  // no attr. template

	if (hFile == INVALID_HANDLE_VALUE)
	{
		printf("Failed!");
		return 1;
	}

	printf("\npress any key to exit...\n");
	getchar();
	return 0;
}


