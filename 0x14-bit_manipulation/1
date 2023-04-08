#include "main.h"
#include <stdlib.h>
/**
 * flip_bits - function that returns  number of bits neede to flip
 * @n:number
 * @m:number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, p;

	n = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			p++;
	return (p);
}
