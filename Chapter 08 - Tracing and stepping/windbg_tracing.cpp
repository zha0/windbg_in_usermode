#include "pch.h"
#include <Windows.h>
#include <iostream>

void sum(int a, int b)
{
	printf("Result of sum operation is %d\n", a + b);
}

void sub(int a, int b)
{
	printf("Result of sub operation is %d\n", a - b);
}

void mul(int a, int b)
{
	printf("Result of mul operation is %d\n", a * b);
}

int main(int argc, char* argv[])
{
	sum(3, 4);
	sub(3, 4);
	mul(3, 4);

	printf("\npress any key to exit...\n");
	getchar();
	return 0;
}


