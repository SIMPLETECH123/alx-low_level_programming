#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n:number
 * @index: index
 * Return:the value of number at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}
