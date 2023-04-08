#include "main.h"
#include <stdio.h>
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n:pointeer
 * @index:number
 * Return:1 if success and -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
