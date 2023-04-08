#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - unction that prints the binary representation of a number.
 * @n:number
 */
void print_binary(unsigned long int n)
{
	int i, k;

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
			printf("1");
		else
			printf("0");
	}
}
