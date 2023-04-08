#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b:pointer
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	size_t len;
	unsigned int i, result;

	if (b == NULL)
		return (0);
	len = strlen(b);
	result = 0;
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
			result = result << 1;
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);
	}
	return (result);
}
