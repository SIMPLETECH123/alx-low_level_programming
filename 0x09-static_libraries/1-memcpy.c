#include "main.h"

/**
 * _memcpy - a function that copies the memory area
 * @dest: input
 * @src: source
 * @n: number to copy
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
