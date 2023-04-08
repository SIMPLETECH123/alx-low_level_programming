#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n:pointer
 * @index:index
 * Return:1 if worked else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
